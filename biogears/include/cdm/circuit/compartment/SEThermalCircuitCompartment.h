/**************************************************************************************
Copyright 2015 Applied Research Associates, Inc.
Licensed under the Apache License, Version 2.0 (the "License"); you may not use
this file except in compliance with the License. You may obtain a copy of the License
at:
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under
the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License.
**************************************************************************************/
#pragma once
#include "compartment/SEThermalCompartment.h"
#include "circuit/compartment/SECircuitCompartment.h"

template <typename CompartmentEnumValue>
class SEThermalCircuitCompartment : public virtual SEThermalCompartment<CompartmentEnumValue>, public SECircuitCompartment<CompartmentEnumValue>
{
public:

	SEThermalCircuitCompartment(CompartmentEnumValue type, const GeneralMath& math, const bool& getNext);
	virtual ~SEThermalCircuitCompartment();

	virtual bool Load(const CDM::ThermalCompartmentData& in);
	virtual std::unique_ptr<CDM::ThermalCompartmentData> Unload() const;
protected:
	void Unload(CDM::ThermalCompartmentData& data) const;
public:

	/** @name GetScalar
	*   @brief - A reflextion type call that will return the Scalar associated
	*            with the string. ex. GetScalar("Hematocrit") will return the
	*            SEScalarPercent object associated with Hematocrit
	*   @details - Note this is an expensive call as it will string compare many times
	*              This is best used, and intended for, you to dynamically prepopulate
	*              a mapping data structure that will help access what you need
	*/
	virtual const SEScalar* GetScalar(const std::string& name);

	virtual void Clear(); //clear memory
	virtual void Reset(); //reset values
	virtual void FixUp(); //analyze and cache for optimization

	virtual bool HasHeat() const;
	virtual SEScalarEnergy& GetHeat();
	virtual double GetHeat(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasHeatTransferRateIn() const;
	virtual SEScalarPower& GetHeatTransferRateIn();
	virtual double GetHeatTransferRateIn(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasHeatTransferRateOut() const;
	virtual SEScalarPower& GetHeatTransferRateOut();
	virtual double GetHeatTransferRateOut(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasTemperature() const;
	virtual SEScalarTemperature& GetTemperature();
	virtual double GetTemperature(const std::shared_ptr<CCompoundUnit>& unit) const;

protected:
	virtual double CalculateInFlow_W() const;
	virtual double CalculateOutFlow_W() const;

	SEScalarEnergy*         m_Heat;
	SEScalarPower*          m_HeatTransferRateIn;
	SEScalarPower*          m_HeatTransferRateOut;
	SEScalarTemperature*    m_Temperature;
};
#include "circuit/compartment/SEThermalCircuitCompartment.inl"
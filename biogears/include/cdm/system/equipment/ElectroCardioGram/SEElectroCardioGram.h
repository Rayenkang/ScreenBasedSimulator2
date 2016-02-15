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
#include "system/SESystem.h"
CDM_BIND_DECL(ElectroCardioGramData)

class DLL_DECL SEElectroCardioGram : public SESystem
{
protected:

public:

	SEElectroCardioGram(Logger* logger);
	virtual ~SEElectroCardioGram();

	virtual void Reset(); //reset values
	virtual void Clear(); //clear memory

	/** @name GetScalar
	*   @brief - A reflextion type call that will return the Scalar associated
	*            with the string. ex. GetScalar("Hematocrit") will return the
	*            SEScalarPercent object associated with Hematocrit
	*   @details - Note this is an expensive call as it will string compare many times
	*              This is best used, and intended for, you to dynamically prepopulate
	*              a mapping data structure that will help access what you need
	*/
	virtual const SEScalar* GetScalar(const std::string& name);

	bool Load(const CDM::ElectroCardioGramData& in);
	std::unique_ptr<CDM::ElectroCardioGramData> Unload() const;
protected:
	void Unload(CDM::ElectroCardioGramData& data) const;

public:
	virtual bool HasECGWaveform() const;
	virtual SEScalarElectricPotential& GetECGWaveform();
	virtual double GetECGWaveform(const std::shared_ptr<CCompoundUnit>& unit) const;

protected:
	SEScalarElectricPotential* m_ECGWaveform;

	std::stringstream		   m_ss;
};
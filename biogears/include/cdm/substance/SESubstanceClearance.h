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
class SESubstanceClearanceAnatomyEffect;
CDM_BIND_DECL(SubstanceClearanceData)
#include "bind/enumCharge.hxx"

enum class RenalDynamic{ Clearance, Regulation };
class DLL_DECL SESubstanceClearance : public Loggable
{
public:

	SESubstanceClearance(Logger* logger);
	virtual ~SESubstanceClearance();

	virtual void Clear(); //clear memory
	virtual void Reset(); //reset values

	/** @name GetScalar
	*   @brief - A reflextion type call that will return the Scalar associated
	*            with the string. ex. GetScalar("Hematocrit") will return the
	*            SEScalarPercent object associated with Hematocrit
	*   @details - Note this is an expensive call as it will string compare many times
	*              This is best used, and intended for, you to dynamically prepopulate
	*              a mapping data structure that will help access what you need
	*/
	virtual const SEScalar* GetScalar(const std::string& name);

	bool Load(const CDM::SubstanceClearanceData& in);
	std::unique_ptr<CDM::SubstanceClearanceData> Unload() const;
protected:
	void Unload(CDM::SubstanceClearanceData& data) const;
public:

	virtual bool HasSystemic() const { return m_hasSystemic; }
	virtual void SetSystemic(bool b){ m_hasSystemic=b; }

	virtual CDM::enumCharge::value GetChargeInBlood() const;
	virtual void SetChargeInBlood(CDM::enumCharge::value type);
	virtual bool HasChargeInBlood() const;
	virtual void InvalidateChargeInBlood();

	virtual bool HasFractionExcretedInFeces() const;
	virtual SEScalarFraction& GetFractionExcretedInFeces();
	virtual double GetFractionExcretedInFeces() const;

	virtual bool HasFractionExcretedInUrine() const;
	virtual SEScalarFraction& GetFractionExcretedInUrine();
	virtual double GetFractionExcretedInUrine() const;

	virtual bool HasFractionMetabolizedInGut() const;
	virtual SEScalarFraction& GetFractionMetabolizedInGut();
	virtual double GetFractionMetabolizedInGut() const;

	virtual bool HasFractionUnboundInPlasma() const;
	virtual SEScalarFraction& GetFractionUnboundInPlasma();
	virtual double GetFractionUnboundInPlasma() const;

	virtual bool HasGlomerularFilterability() const;
	virtual SEScalar& GetGlomerularFilterability();
	virtual double GetGlomerularFilterability(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasIntrinsicClearance() const;
	virtual SEScalarVolumePerTimePerMass& GetIntrinsicClearance();
	virtual double GetIntrinsicClearance(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual RenalDynamic GetRenalDynamic() const;
	virtual void SetRenalDynamic(RenalDynamic d);
	virtual bool HasRenalDynamic() const;
	virtual void InvalidateRenalDynamic();

	virtual bool HasRenalClearance() const;
	virtual SEScalarVolumePerTimePerMass& GetRenalClearance();
	virtual double GetRenalClearance(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasRenalReabsorptionRatio() const;
	virtual SEScalar& GetRenalReabsorptionRatio();
	virtual double GetRenalReabsorptionRatio(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasRenalTransportMaximum() const;
	virtual SEScalarMassPerTime& GetRenalTransportMaximum();
	virtual double GetRenalTransportMaximum(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasRenalFiltrationRate() const;
	virtual SEScalarMassPerTime& GetRenalFiltrationRate();
	virtual double GetRenalFiltrationRate(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasRenalReabsorptionRate() const;
	virtual SEScalarMassPerTime& GetRenalReabsorptionRate();
	virtual double GetRenalReabsorptionRate(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasRenalExcretionRate() const;
	virtual SEScalarMassPerTime& GetRenalExcretionRate();
	virtual double GetRenalExcretionRate(const std::shared_ptr<CCompoundUnit>& unit) const;

	virtual bool HasSystemicClearance() const;
	virtual SEScalarVolumePerTimePerMass& GetSystemicClearance();
	virtual double GetSystemicClearance(const std::shared_ptr<CCompoundUnit>& unit) const;

protected: 

	bool                            m_hasSystemic;
	CDM::enumCharge::value          m_ChargeInBlood;
	SEScalarFraction*			    m_FractionExcretedInFeces;
	SEScalarFraction*			    m_FractionExcretedInUrine;
	SEScalarFraction*			    m_FractionMetabolizedInGut;
	SEScalarFraction*			    m_FractionUnboundInPlasma;
	SEScalarVolumePerTimePerMass*   m_IntrinsicClearance;
	RenalDynamic                    m_RenalDynamic;
	SEScalarVolumePerTimePerMass*   m_RenalClearance;
	SEScalar*                       m_RenalReabsorptionRatio;
	SEScalarMassPerTime*            m_RenalTransportMaximum;
	SEScalarMassPerTime*			m_RenalFiltrationRate;
	SEScalarMassPerTime*			m_RenalReabsorptionRate;
	SEScalarMassPerTime*			m_RenalExcretionRate;
	SEScalar*                       m_GlomerularFilterability;
	SEScalarVolumePerTimePerMass*   m_SystemicClearance;
};
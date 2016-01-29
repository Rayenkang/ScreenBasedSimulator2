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
#include "patient/SEPatient.h"
#include "patient/actions/SEAirwayObstruction.h"
#include "patient/actions/SEBronchoconstriction.h"
#include "patient/actions/SECardiacArrest.h"
#include "patient/actions/SEAsthmaAttack.h"
#include "patient/actions/SEChestCompressionForce.h"
#include "patient/actions/SEChestCompressionForceScale.h"
#include "patient/actions/SEChestOcclusiveDressing.h"
#include "patient/actions/SEConsciousRespiration.h"
#include "patient/actions/SEConsumeNutrients.h"
#include "patient/actions/SEExercise.h"
#include "patient/actions/SEHemorrhage.h"
#include "patient/actions/SEEndotrachealIntubation.h"
#include "patient/actions/SEEsophagealIntubation.h"
#include "patient/actions/SENeedleDecompression.h"
#include "patient/actions/SEPericardialEffusion.h"
#include "patient/actions/SETensionPneumothorax.h"
#include "patient/actions/SESubstanceBolus.h"
#include "patient/actions/SESubstanceCompoundInfusion.h"
#include "patient/actions/SESubstanceInfusion.h"
#include "patient/actions/SEUrinate.h"
#include "patient/actions/SEPatientAssessmentRequest.h"

#include "substance/SESubstanceManager.h"

#include "system/physiology/SEGastrointestinalSystem.h"

class DLL_DECL SEPatientActionCollection : public Loggable
{
public:

	SEPatientActionCollection(SESubstanceManager&);
	~SEPatientActionCollection();

	void Clear();
	bool ProcessAction(const SEPatientAction& action);

	bool HasAirwayObstruction() const;
	SEAirwayObstruction* GetAirwayObstruction() const;
	void RemoveAirwayObstruction();

	bool HasAsthmaAttack() const;
	SEAsthmaAttack* GetAsthmaAttack() const;
	void RemoveAsthmaAttack();

	bool HasBronchoconstriction() const;
	SEBronchoconstriction* GetBronchoconstriction() const;
	void RemoveBronchoconstriction();

	bool HasCardiacArrest() const;
	SECardiacArrest* GetCardiacArrest() const;
	void RemoveCardiacArrest();

	bool HasChestCompression() const;
	void RemoveChestCompression();
	bool HasChestCompressionForce() const;
	SEChestCompressionForce* GetChestCompressionForce() const;
	bool HasChestCompressionForceScale() const;
	SEChestCompressionForceScale* GetChestCompressionForceScale() const;

	bool HasChestOcclusiveDressing() const;
	bool HasLeftChestOcclusiveDressing() const;
	SEChestOcclusiveDressing* GetLeftChestOcclusiveDressing() const;
	void RemoveLeftChestOcclusiveDressing();
	bool HasRightChestOcclusiveDressing() const;
	SEChestOcclusiveDressing* GetRightChestOcclusiveDressing() const;
	void RemoveRightChestOcclusiveDressing();

	bool HasConsciousRespiration() const;
	SEConsciousRespiration* GetConsciousRespiration() const;
	void RemoveConsciousRespiration();

	bool HasConsumeNutrients() const;
	SEConsumeNutrients* GetConsumeNutrients() const;
	void RemoveConsumeNutrients();

	bool HasExercise() const;
	SEExercise* GetExercise() const;
	void RemoveExercise();

	bool HasHemorrhage() const;
	const std::map<CDM::enumAnatomy::value,SEHemorrhage*>& GetHemorrhages() const;
	void RemoveHemorrhage(CDM::enumAnatomy::value cmpt);

	bool HasIntubation() const;
	void RemoveIntubation();
	bool HasEndotrachealIntubation() const;
	SEEndotrachealIntubation* GetEndotrachealIntubation() const;
	bool HasEsophagealIntubation() const;
	SEEsophagealIntubation* GetEsophagealIntubation() const;

	bool HasNeedleDecompression() const;

	bool HasLeftNeedleDecompression() const;
	SENeedleDecompression* GetLeftNeedleDecompression() const;
	void RemoveLeftNeedleDecompression();

	bool HasRightNeedleDecompression() const;
	SENeedleDecompression* GetRightNeedleDecompression() const;
	void RemoveRightNeedleDecompression();

	bool HasPericardialEffusion() const;
	SEPericardialEffusion* GetPericardialEffusion() const;
	void RemovePericardialEffusion();

	bool HasTensionPneumothorax() const;

	bool HasLeftClosedTensionPneumothorax() const;
	SETensionPneumothorax* GetLeftClosedTensionPneumothorax() const;
	void RemoveLeftClosedTensionPneumothorax();

	bool HasLeftOpenTensionPneumothorax() const;
	SETensionPneumothorax* GetLeftOpenTensionPneumothorax() const;
	void RemoveLeftOpenTensionPneumothorax();

	bool HasRightClosedTensionPneumothorax() const;
	SETensionPneumothorax* GetRightClosedTensionPneumothorax() const;
	void RemoveRightClosedTensionPneumothorax();

	bool HasRightOpenTensionPneumothorax() const;
	SETensionPneumothorax* GetRightOpenTensionPneumothorax() const;
	void RemoveRightOpenTensionPneumothorax();

	const std::map<const SESubstance*, SESubstanceBolus*>&  GetSubstanceBoluses() const;
	void RemoveSubstanceBolus(const SESubstance& sub);

	const std::map<const SESubstance*, SESubstanceInfusion*>& GetSubstanceInfusions() const;
	void RemoveSubstanceInfusion(const SESubstance& sub);

	const std::map<const SESubstanceCompound*, SESubstanceCompoundInfusion*>&  GetSubstanceCompoundInfusions() const;
	void RemoveSubstanceCompoundInfusion(const SESubstanceCompound& sub);


	bool HasUrinate() const;
	SEUrinate* GetUrinate() const;
	void RemoveUrinate();

protected:

	SEAirwayObstruction*				      m_AirwayObstruction;
	SEAsthmaAttack*							  m_AsthmaAttack;
	SEBronchoconstriction*				      m_Bronchoconstriction;
	SECardiacArrest*                          m_CardiacArrest;
	SEChestCompression*					      m_ChestCompression;
	SEChestOcclusiveDressing*			      m_LeftChestOcclusiveDressing;
	SEChestOcclusiveDressing*			      m_RightChestOcclusiveDressing;
	SEConsciousRespiration*                   m_ConsciousRespiration;
	SEConsumeNutrients*                       m_ConsumeNutrients;
	SEExercise*					              m_Exercise;
	SEIntubation*					          m_Intubation;
	SENeedleDecompression*				      m_LeftNeedleDecompression;
	SENeedleDecompression*				      m_RightNeedleDecompression;
	SEPericardialEffusion*				      m_PericardialEffusion;
	SETensionPneumothorax*				      m_LeftClosedTensionPneumothorax;
	SETensionPneumothorax*				      m_LeftOpenTensionPneumothorax;
	SETensionPneumothorax*				      m_RightClosedTensionPneumothorax;
	SETensionPneumothorax*				      m_RightOpenTensionPneumothorax;
	SEUrinate*                                m_Urinate;

	std::map<CDM::enumAnatomy::value, SEHemorrhage*>                  m_Hemorrhages;
	std::map<const SESubstance*,SESubstanceBolus*>                    m_SubstanceBolus;
	std::map<const SESubstance*,SESubstanceInfusion*>                 m_SubstanceInfusions;
	std::map<const SESubstanceCompound*,SESubstanceCompoundInfusion*> m_SubstanceCompoundInfusions;

	bool AdministerSubstance(const SESubstanceAdministration& subAdmin);

	SESubstanceManager& m_Substances;

	std::stringstream m_ss;
};

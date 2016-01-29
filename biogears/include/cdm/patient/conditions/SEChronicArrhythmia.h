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
#include "patient/conditions/SEPatientCondition.h"
CDM_BIND_DECL(ChronicArrhythmiaData)

class DLL_DECL SEChronicArrhythmia : public SEPatientCondition
{
public:

	SEChronicArrhythmia();
	virtual ~SEChronicArrhythmia();
	SEChronicArrhythmia(const SEChronicArrhythmia& other);
	virtual void Copy(const SEChronicArrhythmia& other);

	virtual void Reset(); //reset values
	virtual void Clear(); //clear memory

	virtual bool IsValid() const;

	bool Load(const CDM::ChronicArrhythmiaData& in);
	std::unique_ptr<CDM::ChronicArrhythmiaData> Unload() const;
protected:
	void Unload(CDM::ChronicArrhythmiaData& data) const;
public:

	virtual bool HasHeartRateBaseline() const;
	virtual SEScalarFrequency& GetHeartRateBaseline();

	virtual void ToString(std::ostream &str) const = 0;

protected:
	SEScalarFrequency*           m_HeartRateBaseline;
};      
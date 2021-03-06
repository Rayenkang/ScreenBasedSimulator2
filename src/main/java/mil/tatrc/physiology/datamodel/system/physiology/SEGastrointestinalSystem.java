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

package mil.tatrc.physiology.datamodel.system.physiology;

import mil.tatrc.physiology.datamodel.CDMSerializer;
import mil.tatrc.physiology.datamodel.bind.GastrointestinalSystemData;
import mil.tatrc.physiology.datamodel.patient.nutrition.SENutrition;
import mil.tatrc.physiology.datamodel.properties.*;
import mil.tatrc.physiology.datamodel.system.SESystem;

public class SEGastrointestinalSystem extends SEPhysiologySystem implements SESystem
{
    protected SEScalarVolumePerTime chymeAbsorbtionRate;
    protected SENutrition			      nutrientsInStomach;
	
	public SEGastrointestinalSystem()
	{
		chymeAbsorbtionRate = null;
		nutrientsInStomach = null;
	}
	
	public void reset()
	{		
        if (chymeAbsorbtionRate != null)
        	chymeAbsorbtionRate.invalidate();
        if (nutrientsInStomach != null)
        	nutrientsInStomach.reset();
	}
	
	public boolean load(GastrointestinalSystemData in)
	{		
        if (in.getChymeAbsorbtionRate() != null)
        	getChymeAbsorbtionRate().load(in.getChymeAbsorbtionRate());
        if (in.getNutrientsInStomach() != null)
        	getNutrientsInStomach().load(in.getNutrientsInStomach());
		
		return true;
	}
	
	public GastrointestinalSystemData unload()
	{
		GastrointestinalSystemData data = CDMSerializer.objFactory.createGastrointestinalSystemData();
		unload(data);
		return data;
	}
	
	protected void unload(GastrointestinalSystemData data)
	{		
        if (getChymeAbsorbtionRate() != null)
            data.setChymeAbsorbtionRate(chymeAbsorbtionRate.unload());
        if (getNutrientsInStomach() != null)
            data.setNutrientsInStomach(nutrientsInStomach.unload());
	}
	
    public boolean hasChymeAbsorbtionRate()
    {
        return chymeAbsorbtionRate == null ? false : chymeAbsorbtionRate.isValid();
    }
    public SEScalarVolumePerTime getChymeAbsorbtionRate()
    {
        if (chymeAbsorbtionRate == null)
        	chymeAbsorbtionRate = new SEScalarVolumePerTime();
        return chymeAbsorbtionRate;
    }
    
    public boolean hasNutrientsInStomach()
    {
        return nutrientsInStomach == null ? false : true;
    }
    public SENutrition getNutrientsInStomach()
    {
        if (nutrientsInStomach == null)
        	nutrientsInStomach = new SENutrition();
        return nutrientsInStomach;
    }
}

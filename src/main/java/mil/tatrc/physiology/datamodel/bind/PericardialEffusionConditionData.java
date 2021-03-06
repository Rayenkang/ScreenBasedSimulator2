//
// This file was generated by the JavaTM Architecture for XML Binding(JAXB) Reference Implementation, v2.2.8-b130911.1802 
// See <a href="http://java.sun.com/xml/jaxb">http://java.sun.com/xml/jaxb</a> 
// Any modifications to this file will be lost upon recompilation of the source schema. 
// Generated on: 2015.12.09 at 06:16:52 PM EST 
//


package mil.tatrc.physiology.datamodel.bind;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for PericardialEffusionConditionData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="PericardialEffusionConditionData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}PatientConditionData">
 *       &lt;sequence>
 *         &lt;element name="AccumulatedVolume" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "PericardialEffusionConditionData", propOrder = {
    "accumulatedVolume"
})
public class PericardialEffusionConditionData
    extends PatientConditionData
{

    @XmlElement(name = "AccumulatedVolume", required = true)
    protected ScalarVolumeData accumulatedVolume;

    /**
     * Gets the value of the accumulatedVolume property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getAccumulatedVolume() {
        return accumulatedVolume;
    }

    /**
     * Sets the value of the accumulatedVolume property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setAccumulatedVolume(ScalarVolumeData value) {
        this.accumulatedVolume = value;
    }

}

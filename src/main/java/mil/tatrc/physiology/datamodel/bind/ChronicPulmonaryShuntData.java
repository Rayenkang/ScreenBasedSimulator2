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
 * <p>Java class for ChronicPulmonaryShuntData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="ChronicPulmonaryShuntData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}PatientConditionData">
 *       &lt;sequence>
 *         &lt;element name="ShuntFraction" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "ChronicPulmonaryShuntData", propOrder = {
    "shuntFraction"
})
public class ChronicPulmonaryShuntData
    extends PatientConditionData
{

    @XmlElement(name = "ShuntFraction", required = true)
    protected ScalarFractionData shuntFraction;

    /**
     * Gets the value of the shuntFraction property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getShuntFraction() {
        return shuntFraction;
    }

    /**
     * Sets the value of the shuntFraction property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setShuntFraction(ScalarFractionData value) {
        this.shuntFraction = value;
    }

}

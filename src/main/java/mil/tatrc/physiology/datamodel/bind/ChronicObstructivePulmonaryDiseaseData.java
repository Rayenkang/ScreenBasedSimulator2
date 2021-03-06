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
 * <p>Java class for ChronicObstructivePulmonaryDiseaseData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="ChronicObstructivePulmonaryDiseaseData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}PatientConditionData">
 *       &lt;sequence>
 *         &lt;element name="BronchitisSeverity" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData"/>
 *         &lt;element name="EmphysemaSeverity" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "ChronicObstructivePulmonaryDiseaseData", propOrder = {
    "bronchitisSeverity",
    "emphysemaSeverity"
})
public class ChronicObstructivePulmonaryDiseaseData
    extends PatientConditionData
{

    @XmlElement(name = "BronchitisSeverity", required = true)
    protected ScalarFractionData bronchitisSeverity;
    @XmlElement(name = "EmphysemaSeverity", required = true)
    protected ScalarFractionData emphysemaSeverity;

    /**
     * Gets the value of the bronchitisSeverity property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getBronchitisSeverity() {
        return bronchitisSeverity;
    }

    /**
     * Sets the value of the bronchitisSeverity property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setBronchitisSeverity(ScalarFractionData value) {
        this.bronchitisSeverity = value;
    }

    /**
     * Gets the value of the emphysemaSeverity property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getEmphysemaSeverity() {
        return emphysemaSeverity;
    }

    /**
     * Sets the value of the emphysemaSeverity property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setEmphysemaSeverity(ScalarFractionData value) {
        this.emphysemaSeverity = value;
    }

}

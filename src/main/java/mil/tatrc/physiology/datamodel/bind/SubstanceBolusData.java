//
// This file was generated by the JavaTM Architecture for XML Binding(JAXB) Reference Implementation, v2.2.8-b130911.1802 
// See <a href="http://java.sun.com/xml/jaxb">http://java.sun.com/xml/jaxb</a> 
// Any modifications to this file will be lost upon recompilation of the source schema. 
// Generated on: 2015.12.09 at 06:16:52 PM EST 
//


package mil.tatrc.physiology.datamodel.bind;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for SubstanceBolusData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="SubstanceBolusData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}SubstanceAdministrationData">
 *       &lt;sequence>
 *         &lt;element name="Substance" type="{http://www.w3.org/2001/XMLSchema}string"/>
 *         &lt;element name="Concentration" type="{uri:/mil/tatrc/physiology/datamodel}ScalarMassPerVolumeData"/>
 *         &lt;element name="Dose" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData"/>
 *       &lt;/sequence>
 *       &lt;attribute name="AdminRoute" use="required" type="{uri:/mil/tatrc/physiology/datamodel}enumSubstanceAdministration" />
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "SubstanceBolusData", propOrder = {
    "substance",
    "concentration",
    "dose"
})
public class SubstanceBolusData
    extends SubstanceAdministrationData
{

    @XmlElement(name = "Substance", required = true)
    protected String substance;
    @XmlElement(name = "Concentration", required = true)
    protected ScalarMassPerVolumeData concentration;
    @XmlElement(name = "Dose", required = true)
    protected ScalarVolumeData dose;
    @XmlAttribute(name = "AdminRoute", required = true)
    protected EnumSubstanceAdministration adminRoute;

    /**
     * Gets the value of the substance property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getSubstance() {
        return substance;
    }

    /**
     * Sets the value of the substance property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setSubstance(String value) {
        this.substance = value;
    }

    /**
     * Gets the value of the concentration property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public ScalarMassPerVolumeData getConcentration() {
        return concentration;
    }

    /**
     * Sets the value of the concentration property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public void setConcentration(ScalarMassPerVolumeData value) {
        this.concentration = value;
    }

    /**
     * Gets the value of the dose property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getDose() {
        return dose;
    }

    /**
     * Sets the value of the dose property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setDose(ScalarVolumeData value) {
        this.dose = value;
    }

    /**
     * Gets the value of the adminRoute property.
     * 
     * @return
     *     possible object is
     *     {@link EnumSubstanceAdministration }
     *     
     */
    public EnumSubstanceAdministration getAdminRoute() {
        return adminRoute;
    }

    /**
     * Sets the value of the adminRoute property.
     * 
     * @param value
     *     allowed object is
     *     {@link EnumSubstanceAdministration }
     *     
     */
    public void setAdminRoute(EnumSubstanceAdministration value) {
        this.adminRoute = value;
    }

}

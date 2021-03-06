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
 * <p>Java class for TissueCompartmentData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="TissueCompartmentData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}CompartmentData">
 *       &lt;sequence>
 *         &lt;element name="TissueVolume" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData" minOccurs="0"/>
 *         &lt;element name="ExtravascularInFlow" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumePerTimeData" minOccurs="0"/>
 *         &lt;element name="ExtravascularOutFlow" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumePerTimeData" minOccurs="0"/>
 *         &lt;element name="ExtravascularPressure" type="{uri:/mil/tatrc/physiology/datamodel}ScalarPressureData" minOccurs="0"/>
 *         &lt;element name="ExtravascularVolume" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData" minOccurs="0"/>
 *         &lt;element name="ExtravascularUnstressedVolume" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData" minOccurs="0"/>
 *         &lt;element name="MetabolicFraction" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData" minOccurs="0"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "TissueCompartmentData", propOrder = {
    "tissueVolume",
    "extravascularInFlow",
    "extravascularOutFlow",
    "extravascularPressure",
    "extravascularVolume",
    "extravascularUnstressedVolume",
    "metabolicFraction"
})
public class TissueCompartmentData
    extends CompartmentData
{

    @XmlElement(name = "TissueVolume")
    protected ScalarVolumeData tissueVolume;
    @XmlElement(name = "ExtravascularInFlow")
    protected ScalarVolumePerTimeData extravascularInFlow;
    @XmlElement(name = "ExtravascularOutFlow")
    protected ScalarVolumePerTimeData extravascularOutFlow;
    @XmlElement(name = "ExtravascularPressure")
    protected ScalarPressureData extravascularPressure;
    @XmlElement(name = "ExtravascularVolume")
    protected ScalarVolumeData extravascularVolume;
    @XmlElement(name = "ExtravascularUnstressedVolume")
    protected ScalarVolumeData extravascularUnstressedVolume;
    @XmlElement(name = "MetabolicFraction")
    protected ScalarFractionData metabolicFraction;

    /**
     * Gets the value of the tissueVolume property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getTissueVolume() {
        return tissueVolume;
    }

    /**
     * Sets the value of the tissueVolume property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setTissueVolume(ScalarVolumeData value) {
        this.tissueVolume = value;
    }

    /**
     * Gets the value of the extravascularInFlow property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public ScalarVolumePerTimeData getExtravascularInFlow() {
        return extravascularInFlow;
    }

    /**
     * Sets the value of the extravascularInFlow property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public void setExtravascularInFlow(ScalarVolumePerTimeData value) {
        this.extravascularInFlow = value;
    }

    /**
     * Gets the value of the extravascularOutFlow property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public ScalarVolumePerTimeData getExtravascularOutFlow() {
        return extravascularOutFlow;
    }

    /**
     * Sets the value of the extravascularOutFlow property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public void setExtravascularOutFlow(ScalarVolumePerTimeData value) {
        this.extravascularOutFlow = value;
    }

    /**
     * Gets the value of the extravascularPressure property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarPressureData }
     *     
     */
    public ScalarPressureData getExtravascularPressure() {
        return extravascularPressure;
    }

    /**
     * Sets the value of the extravascularPressure property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarPressureData }
     *     
     */
    public void setExtravascularPressure(ScalarPressureData value) {
        this.extravascularPressure = value;
    }

    /**
     * Gets the value of the extravascularVolume property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getExtravascularVolume() {
        return extravascularVolume;
    }

    /**
     * Sets the value of the extravascularVolume property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setExtravascularVolume(ScalarVolumeData value) {
        this.extravascularVolume = value;
    }

    /**
     * Gets the value of the extravascularUnstressedVolume property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getExtravascularUnstressedVolume() {
        return extravascularUnstressedVolume;
    }

    /**
     * Sets the value of the extravascularUnstressedVolume property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setExtravascularUnstressedVolume(ScalarVolumeData value) {
        this.extravascularUnstressedVolume = value;
    }

    /**
     * Gets the value of the metabolicFraction property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getMetabolicFraction() {
        return metabolicFraction;
    }

    /**
     * Sets the value of the metabolicFraction property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setMetabolicFraction(ScalarFractionData value) {
        this.metabolicFraction = value;
    }

}

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
 * <p>Java class for RespiratorySystemData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="RespiratorySystemData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}SystemData">
 *       &lt;sequence>
 *         &lt;element name="EndTidalCarbonDioxideFraction" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData" minOccurs="0"/>
 *         &lt;element name="InspiratoryExpiratoryRatio" type="{uri:/mil/tatrc/physiology/datamodel}ScalarData" minOccurs="0"/>
 *         &lt;element name="PulmonaryCompliance" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFlowComplianceData" minOccurs="0"/>
 *         &lt;element name="PulmonaryResistance" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFlowResistanceData" minOccurs="0"/>
 *         &lt;element name="RespirationDriverPressure" type="{uri:/mil/tatrc/physiology/datamodel}ScalarPressureData" minOccurs="0"/>
 *         &lt;element name="RespirationRate" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFrequencyData" minOccurs="0"/>
 *         &lt;element name="SpecificVentilation" type="{uri:/mil/tatrc/physiology/datamodel}ScalarData" minOccurs="0"/>
 *         &lt;element name="TidalVolume" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData" minOccurs="0"/>
 *         &lt;element name="TotalAlveolarVentilation" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumePerTimeData" minOccurs="0"/>
 *         &lt;element name="TotalDeadSpaceVentilation" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumePerTimeData" minOccurs="0"/>
 *         &lt;element name="TotalLungVolume" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData" minOccurs="0"/>
 *         &lt;element name="TotalPulmonaryVentilation" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumePerTimeData" minOccurs="0"/>
 *         &lt;element name="TranspulmonaryPressure" type="{uri:/mil/tatrc/physiology/datamodel}ScalarPressureData" minOccurs="0"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "RespiratorySystemData", propOrder = {
    "endTidalCarbonDioxideFraction",
    "inspiratoryExpiratoryRatio",
    "pulmonaryCompliance",
    "pulmonaryResistance",
    "respirationDriverPressure",
    "respirationRate",
    "specificVentilation",
    "tidalVolume",
    "totalAlveolarVentilation",
    "totalDeadSpaceVentilation",
    "totalLungVolume",
    "totalPulmonaryVentilation",
    "transpulmonaryPressure"
})
public class RespiratorySystemData
    extends SystemData
{

    @XmlElement(name = "EndTidalCarbonDioxideFraction")
    protected ScalarFractionData endTidalCarbonDioxideFraction;
    @XmlElement(name = "InspiratoryExpiratoryRatio")
    protected ScalarData inspiratoryExpiratoryRatio;
    @XmlElement(name = "PulmonaryCompliance")
    protected ScalarFlowComplianceData pulmonaryCompliance;
    @XmlElement(name = "PulmonaryResistance")
    protected ScalarFlowResistanceData pulmonaryResistance;
    @XmlElement(name = "RespirationDriverPressure")
    protected ScalarPressureData respirationDriverPressure;
    @XmlElement(name = "RespirationRate")
    protected ScalarFrequencyData respirationRate;
    @XmlElement(name = "SpecificVentilation")
    protected ScalarData specificVentilation;
    @XmlElement(name = "TidalVolume")
    protected ScalarVolumeData tidalVolume;
    @XmlElement(name = "TotalAlveolarVentilation")
    protected ScalarVolumePerTimeData totalAlveolarVentilation;
    @XmlElement(name = "TotalDeadSpaceVentilation")
    protected ScalarVolumePerTimeData totalDeadSpaceVentilation;
    @XmlElement(name = "TotalLungVolume")
    protected ScalarVolumeData totalLungVolume;
    @XmlElement(name = "TotalPulmonaryVentilation")
    protected ScalarVolumePerTimeData totalPulmonaryVentilation;
    @XmlElement(name = "TranspulmonaryPressure")
    protected ScalarPressureData transpulmonaryPressure;

    /**
     * Gets the value of the endTidalCarbonDioxideFraction property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getEndTidalCarbonDioxideFraction() {
        return endTidalCarbonDioxideFraction;
    }

    /**
     * Sets the value of the endTidalCarbonDioxideFraction property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setEndTidalCarbonDioxideFraction(ScalarFractionData value) {
        this.endTidalCarbonDioxideFraction = value;
    }

    /**
     * Gets the value of the inspiratoryExpiratoryRatio property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarData }
     *     
     */
    public ScalarData getInspiratoryExpiratoryRatio() {
        return inspiratoryExpiratoryRatio;
    }

    /**
     * Sets the value of the inspiratoryExpiratoryRatio property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarData }
     *     
     */
    public void setInspiratoryExpiratoryRatio(ScalarData value) {
        this.inspiratoryExpiratoryRatio = value;
    }

    /**
     * Gets the value of the pulmonaryCompliance property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFlowComplianceData }
     *     
     */
    public ScalarFlowComplianceData getPulmonaryCompliance() {
        return pulmonaryCompliance;
    }

    /**
     * Sets the value of the pulmonaryCompliance property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFlowComplianceData }
     *     
     */
    public void setPulmonaryCompliance(ScalarFlowComplianceData value) {
        this.pulmonaryCompliance = value;
    }

    /**
     * Gets the value of the pulmonaryResistance property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFlowResistanceData }
     *     
     */
    public ScalarFlowResistanceData getPulmonaryResistance() {
        return pulmonaryResistance;
    }

    /**
     * Sets the value of the pulmonaryResistance property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFlowResistanceData }
     *     
     */
    public void setPulmonaryResistance(ScalarFlowResistanceData value) {
        this.pulmonaryResistance = value;
    }

    /**
     * Gets the value of the respirationDriverPressure property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarPressureData }
     *     
     */
    public ScalarPressureData getRespirationDriverPressure() {
        return respirationDriverPressure;
    }

    /**
     * Sets the value of the respirationDriverPressure property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarPressureData }
     *     
     */
    public void setRespirationDriverPressure(ScalarPressureData value) {
        this.respirationDriverPressure = value;
    }

    /**
     * Gets the value of the respirationRate property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFrequencyData }
     *     
     */
    public ScalarFrequencyData getRespirationRate() {
        return respirationRate;
    }

    /**
     * Sets the value of the respirationRate property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFrequencyData }
     *     
     */
    public void setRespirationRate(ScalarFrequencyData value) {
        this.respirationRate = value;
    }

    /**
     * Gets the value of the specificVentilation property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarData }
     *     
     */
    public ScalarData getSpecificVentilation() {
        return specificVentilation;
    }

    /**
     * Sets the value of the specificVentilation property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarData }
     *     
     */
    public void setSpecificVentilation(ScalarData value) {
        this.specificVentilation = value;
    }

    /**
     * Gets the value of the tidalVolume property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getTidalVolume() {
        return tidalVolume;
    }

    /**
     * Sets the value of the tidalVolume property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setTidalVolume(ScalarVolumeData value) {
        this.tidalVolume = value;
    }

    /**
     * Gets the value of the totalAlveolarVentilation property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public ScalarVolumePerTimeData getTotalAlveolarVentilation() {
        return totalAlveolarVentilation;
    }

    /**
     * Sets the value of the totalAlveolarVentilation property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public void setTotalAlveolarVentilation(ScalarVolumePerTimeData value) {
        this.totalAlveolarVentilation = value;
    }

    /**
     * Gets the value of the totalDeadSpaceVentilation property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public ScalarVolumePerTimeData getTotalDeadSpaceVentilation() {
        return totalDeadSpaceVentilation;
    }

    /**
     * Sets the value of the totalDeadSpaceVentilation property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public void setTotalDeadSpaceVentilation(ScalarVolumePerTimeData value) {
        this.totalDeadSpaceVentilation = value;
    }

    /**
     * Gets the value of the totalLungVolume property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getTotalLungVolume() {
        return totalLungVolume;
    }

    /**
     * Sets the value of the totalLungVolume property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setTotalLungVolume(ScalarVolumeData value) {
        this.totalLungVolume = value;
    }

    /**
     * Gets the value of the totalPulmonaryVentilation property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public ScalarVolumePerTimeData getTotalPulmonaryVentilation() {
        return totalPulmonaryVentilation;
    }

    /**
     * Sets the value of the totalPulmonaryVentilation property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumePerTimeData }
     *     
     */
    public void setTotalPulmonaryVentilation(ScalarVolumePerTimeData value) {
        this.totalPulmonaryVentilation = value;
    }

    /**
     * Gets the value of the transpulmonaryPressure property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarPressureData }
     *     
     */
    public ScalarPressureData getTranspulmonaryPressure() {
        return transpulmonaryPressure;
    }

    /**
     * Sets the value of the transpulmonaryPressure property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarPressureData }
     *     
     */
    public void setTranspulmonaryPressure(ScalarPressureData value) {
        this.transpulmonaryPressure = value;
    }

}

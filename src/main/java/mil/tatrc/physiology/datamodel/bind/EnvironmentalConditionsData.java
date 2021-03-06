//
// This file was generated by the JavaTM Architecture for XML Binding(JAXB) Reference Implementation, v2.2.8-b130911.1802 
// See <a href="http://java.sun.com/xml/jaxb">http://java.sun.com/xml/jaxb</a> 
// Any modifications to this file will be lost upon recompilation of the source schema. 
// Generated on: 2015.12.09 at 06:16:52 PM EST 
//


package mil.tatrc.physiology.datamodel.bind;

import java.util.ArrayList;
import java.util.List;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlSchemaType;
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for EnvironmentalConditionsData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="EnvironmentalConditionsData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}ObjectData">
 *       &lt;sequence>
 *         &lt;element name="SurroundingType" type="{uri:/mil/tatrc/physiology/datamodel}enumSurroundingType" minOccurs="0"/>
 *         &lt;element name="AirDensity" type="{uri:/mil/tatrc/physiology/datamodel}ScalarMassPerVolumeData" minOccurs="0"/>
 *         &lt;element name="AirVelocity" type="{uri:/mil/tatrc/physiology/datamodel}ScalarLengthPerTimeData" minOccurs="0"/>
 *         &lt;element name="AmbientTemperature" type="{uri:/mil/tatrc/physiology/datamodel}ScalarTemperatureData" minOccurs="0"/>
 *         &lt;element name="AtmosphericPressure" type="{uri:/mil/tatrc/physiology/datamodel}ScalarPressureData" minOccurs="0"/>
 *         &lt;element name="ClothingResistance" type="{uri:/mil/tatrc/physiology/datamodel}ScalarHeatResistanceAreaData" minOccurs="0"/>
 *         &lt;element name="Emissivity" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData" minOccurs="0"/>
 *         &lt;element name="MeanRadiantTemperature" type="{uri:/mil/tatrc/physiology/datamodel}ScalarTemperatureData" minOccurs="0"/>
 *         &lt;element name="RelativeHumidity" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData" minOccurs="0"/>
 *         &lt;element name="RespirationAmbientTemperature" type="{uri:/mil/tatrc/physiology/datamodel}ScalarTemperatureData" minOccurs="0"/>
 *         &lt;element name="AmbientSubstance" type="{uri:/mil/tatrc/physiology/datamodel}SubstanceFractionData" maxOccurs="unbounded" minOccurs="0"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "EnvironmentalConditionsData", propOrder = {
    "surroundingType",
    "airDensity",
    "airVelocity",
    "ambientTemperature",
    "atmosphericPressure",
    "clothingResistance",
    "emissivity",
    "meanRadiantTemperature",
    "relativeHumidity",
    "respirationAmbientTemperature",
    "ambientSubstance"
})
public class EnvironmentalConditionsData
    extends ObjectData
{

    @XmlElement(name = "SurroundingType")
    @XmlSchemaType(name = "string")
    protected EnumSurroundingType surroundingType;
    @XmlElement(name = "AirDensity")
    protected ScalarMassPerVolumeData airDensity;
    @XmlElement(name = "AirVelocity")
    protected ScalarLengthPerTimeData airVelocity;
    @XmlElement(name = "AmbientTemperature")
    protected ScalarTemperatureData ambientTemperature;
    @XmlElement(name = "AtmosphericPressure")
    protected ScalarPressureData atmosphericPressure;
    @XmlElement(name = "ClothingResistance")
    protected ScalarHeatResistanceAreaData clothingResistance;
    @XmlElement(name = "Emissivity")
    protected ScalarFractionData emissivity;
    @XmlElement(name = "MeanRadiantTemperature")
    protected ScalarTemperatureData meanRadiantTemperature;
    @XmlElement(name = "RelativeHumidity")
    protected ScalarFractionData relativeHumidity;
    @XmlElement(name = "RespirationAmbientTemperature")
    protected ScalarTemperatureData respirationAmbientTemperature;
    @XmlElement(name = "AmbientSubstance")
    protected List<SubstanceFractionData> ambientSubstance;

    /**
     * Gets the value of the surroundingType property.
     * 
     * @return
     *     possible object is
     *     {@link EnumSurroundingType }
     *     
     */
    public EnumSurroundingType getSurroundingType() {
        return surroundingType;
    }

    /**
     * Sets the value of the surroundingType property.
     * 
     * @param value
     *     allowed object is
     *     {@link EnumSurroundingType }
     *     
     */
    public void setSurroundingType(EnumSurroundingType value) {
        this.surroundingType = value;
    }

    /**
     * Gets the value of the airDensity property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public ScalarMassPerVolumeData getAirDensity() {
        return airDensity;
    }

    /**
     * Sets the value of the airDensity property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public void setAirDensity(ScalarMassPerVolumeData value) {
        this.airDensity = value;
    }

    /**
     * Gets the value of the airVelocity property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarLengthPerTimeData }
     *     
     */
    public ScalarLengthPerTimeData getAirVelocity() {
        return airVelocity;
    }

    /**
     * Sets the value of the airVelocity property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarLengthPerTimeData }
     *     
     */
    public void setAirVelocity(ScalarLengthPerTimeData value) {
        this.airVelocity = value;
    }

    /**
     * Gets the value of the ambientTemperature property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarTemperatureData }
     *     
     */
    public ScalarTemperatureData getAmbientTemperature() {
        return ambientTemperature;
    }

    /**
     * Sets the value of the ambientTemperature property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarTemperatureData }
     *     
     */
    public void setAmbientTemperature(ScalarTemperatureData value) {
        this.ambientTemperature = value;
    }

    /**
     * Gets the value of the atmosphericPressure property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarPressureData }
     *     
     */
    public ScalarPressureData getAtmosphericPressure() {
        return atmosphericPressure;
    }

    /**
     * Sets the value of the atmosphericPressure property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarPressureData }
     *     
     */
    public void setAtmosphericPressure(ScalarPressureData value) {
        this.atmosphericPressure = value;
    }

    /**
     * Gets the value of the clothingResistance property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarHeatResistanceAreaData }
     *     
     */
    public ScalarHeatResistanceAreaData getClothingResistance() {
        return clothingResistance;
    }

    /**
     * Sets the value of the clothingResistance property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarHeatResistanceAreaData }
     *     
     */
    public void setClothingResistance(ScalarHeatResistanceAreaData value) {
        this.clothingResistance = value;
    }

    /**
     * Gets the value of the emissivity property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getEmissivity() {
        return emissivity;
    }

    /**
     * Sets the value of the emissivity property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setEmissivity(ScalarFractionData value) {
        this.emissivity = value;
    }

    /**
     * Gets the value of the meanRadiantTemperature property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarTemperatureData }
     *     
     */
    public ScalarTemperatureData getMeanRadiantTemperature() {
        return meanRadiantTemperature;
    }

    /**
     * Sets the value of the meanRadiantTemperature property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarTemperatureData }
     *     
     */
    public void setMeanRadiantTemperature(ScalarTemperatureData value) {
        this.meanRadiantTemperature = value;
    }

    /**
     * Gets the value of the relativeHumidity property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getRelativeHumidity() {
        return relativeHumidity;
    }

    /**
     * Sets the value of the relativeHumidity property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setRelativeHumidity(ScalarFractionData value) {
        this.relativeHumidity = value;
    }

    /**
     * Gets the value of the respirationAmbientTemperature property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarTemperatureData }
     *     
     */
    public ScalarTemperatureData getRespirationAmbientTemperature() {
        return respirationAmbientTemperature;
    }

    /**
     * Sets the value of the respirationAmbientTemperature property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarTemperatureData }
     *     
     */
    public void setRespirationAmbientTemperature(ScalarTemperatureData value) {
        this.respirationAmbientTemperature = value;
    }

    /**
     * Gets the value of the ambientSubstance property.
     * 
     * <p>
     * This accessor method returns a reference to the live list,
     * not a snapshot. Therefore any modification you make to the
     * returned list will be present inside the JAXB object.
     * This is why there is not a <CODE>set</CODE> method for the ambientSubstance property.
     * 
     * <p>
     * For example, to add a new item, do as follows:
     * <pre>
     *    getAmbientSubstance().add(newItem);
     * </pre>
     * 
     * 
     * <p>
     * Objects of the following type(s) are allowed in the list
     * {@link SubstanceFractionData }
     * 
     * 
     */
    public List<SubstanceFractionData> getAmbientSubstance() {
        if (ambientSubstance == null) {
            ambientSubstance = new ArrayList<SubstanceFractionData>();
        }
        return this.ambientSubstance;
    }

}

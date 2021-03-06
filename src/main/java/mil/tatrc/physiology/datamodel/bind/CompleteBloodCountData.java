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
 * <p>Java class for CompleteBloodCountData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="CompleteBloodCountData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}PatientAssessmentData">
 *       &lt;sequence>
 *         &lt;element name="Hematocrit" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData" minOccurs="0"/>
 *         &lt;element name="Hemoglobin" type="{uri:/mil/tatrc/physiology/datamodel}ScalarMassPerVolumeData" minOccurs="0"/>
 *         &lt;element name="PlateletCount" type="{uri:/mil/tatrc/physiology/datamodel}ScalarAmountPerVolumeData" minOccurs="0"/>
 *         &lt;element name="MeanCorpuscularHemoglobin" type="{uri:/mil/tatrc/physiology/datamodel}ScalarMassPerAmountData" minOccurs="0"/>
 *         &lt;element name="MeanCorpuscularHemoglobinConcentration" type="{uri:/mil/tatrc/physiology/datamodel}ScalarMassPerVolumeData" minOccurs="0"/>
 *         &lt;element name="MeanCorpuscularVolume" type="{uri:/mil/tatrc/physiology/datamodel}ScalarVolumeData" minOccurs="0"/>
 *         &lt;element name="RedBloodCellCount" type="{uri:/mil/tatrc/physiology/datamodel}ScalarAmountPerVolumeData" minOccurs="0"/>
 *         &lt;element name="WhiteBloodCellCount" type="{uri:/mil/tatrc/physiology/datamodel}ScalarAmountPerVolumeData" minOccurs="0"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "CompleteBloodCountData", propOrder = {
    "hematocrit",
    "hemoglobin",
    "plateletCount",
    "meanCorpuscularHemoglobin",
    "meanCorpuscularHemoglobinConcentration",
    "meanCorpuscularVolume",
    "redBloodCellCount",
    "whiteBloodCellCount"
})
public class CompleteBloodCountData
    extends PatientAssessmentData
{

    @XmlElement(name = "Hematocrit")
    protected ScalarFractionData hematocrit;
    @XmlElement(name = "Hemoglobin")
    protected ScalarMassPerVolumeData hemoglobin;
    @XmlElement(name = "PlateletCount")
    protected ScalarAmountPerVolumeData plateletCount;
    @XmlElement(name = "MeanCorpuscularHemoglobin")
    protected ScalarMassPerAmountData meanCorpuscularHemoglobin;
    @XmlElement(name = "MeanCorpuscularHemoglobinConcentration")
    protected ScalarMassPerVolumeData meanCorpuscularHemoglobinConcentration;
    @XmlElement(name = "MeanCorpuscularVolume")
    protected ScalarVolumeData meanCorpuscularVolume;
    @XmlElement(name = "RedBloodCellCount")
    protected ScalarAmountPerVolumeData redBloodCellCount;
    @XmlElement(name = "WhiteBloodCellCount")
    protected ScalarAmountPerVolumeData whiteBloodCellCount;

    /**
     * Gets the value of the hematocrit property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getHematocrit() {
        return hematocrit;
    }

    /**
     * Sets the value of the hematocrit property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setHematocrit(ScalarFractionData value) {
        this.hematocrit = value;
    }

    /**
     * Gets the value of the hemoglobin property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public ScalarMassPerVolumeData getHemoglobin() {
        return hemoglobin;
    }

    /**
     * Sets the value of the hemoglobin property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public void setHemoglobin(ScalarMassPerVolumeData value) {
        this.hemoglobin = value;
    }

    /**
     * Gets the value of the plateletCount property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarAmountPerVolumeData }
     *     
     */
    public ScalarAmountPerVolumeData getPlateletCount() {
        return plateletCount;
    }

    /**
     * Sets the value of the plateletCount property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarAmountPerVolumeData }
     *     
     */
    public void setPlateletCount(ScalarAmountPerVolumeData value) {
        this.plateletCount = value;
    }

    /**
     * Gets the value of the meanCorpuscularHemoglobin property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarMassPerAmountData }
     *     
     */
    public ScalarMassPerAmountData getMeanCorpuscularHemoglobin() {
        return meanCorpuscularHemoglobin;
    }

    /**
     * Sets the value of the meanCorpuscularHemoglobin property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarMassPerAmountData }
     *     
     */
    public void setMeanCorpuscularHemoglobin(ScalarMassPerAmountData value) {
        this.meanCorpuscularHemoglobin = value;
    }

    /**
     * Gets the value of the meanCorpuscularHemoglobinConcentration property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public ScalarMassPerVolumeData getMeanCorpuscularHemoglobinConcentration() {
        return meanCorpuscularHemoglobinConcentration;
    }

    /**
     * Sets the value of the meanCorpuscularHemoglobinConcentration property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarMassPerVolumeData }
     *     
     */
    public void setMeanCorpuscularHemoglobinConcentration(ScalarMassPerVolumeData value) {
        this.meanCorpuscularHemoglobinConcentration = value;
    }

    /**
     * Gets the value of the meanCorpuscularVolume property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarVolumeData }
     *     
     */
    public ScalarVolumeData getMeanCorpuscularVolume() {
        return meanCorpuscularVolume;
    }

    /**
     * Sets the value of the meanCorpuscularVolume property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarVolumeData }
     *     
     */
    public void setMeanCorpuscularVolume(ScalarVolumeData value) {
        this.meanCorpuscularVolume = value;
    }

    /**
     * Gets the value of the redBloodCellCount property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarAmountPerVolumeData }
     *     
     */
    public ScalarAmountPerVolumeData getRedBloodCellCount() {
        return redBloodCellCount;
    }

    /**
     * Sets the value of the redBloodCellCount property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarAmountPerVolumeData }
     *     
     */
    public void setRedBloodCellCount(ScalarAmountPerVolumeData value) {
        this.redBloodCellCount = value;
    }

    /**
     * Gets the value of the whiteBloodCellCount property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarAmountPerVolumeData }
     *     
     */
    public ScalarAmountPerVolumeData getWhiteBloodCellCount() {
        return whiteBloodCellCount;
    }

    /**
     * Sets the value of the whiteBloodCellCount property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarAmountPerVolumeData }
     *     
     */
    public void setWhiteBloodCellCount(ScalarAmountPerVolumeData value) {
        this.whiteBloodCellCount = value;
    }

}

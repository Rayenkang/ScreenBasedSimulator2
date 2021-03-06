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
import javax.xml.bind.annotation.XmlSeeAlso;
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for PhysiologyEngineConfigurationData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="PhysiologyEngineConfigurationData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}ObjectData">
 *       &lt;sequence>
 *         &lt;element name="ECGDataFile" type="{http://www.w3.org/2001/XMLSchema}string" minOccurs="0"/>
 *         &lt;element name="KelmanEquation" type="{uri:/mil/tatrc/physiology/datamodel}KelmanEquationData" minOccurs="0"/>
 *         &lt;choice>
 *           &lt;element name="StabilizationCriteria" type="{uri:/mil/tatrc/physiology/datamodel}PhysiologyEngineStabilizationData" minOccurs="0"/>
 *           &lt;element name="StabilizationCriteriaFile" type="{http://www.w3.org/2001/XMLSchema}string" minOccurs="0"/>
 *         &lt;/choice>
 *         &lt;element name="TimeStep" type="{uri:/mil/tatrc/physiology/datamodel}ScalarTimeData" minOccurs="0"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "PhysiologyEngineConfigurationData", propOrder = {
    "ecgDataFile",
    "kelmanEquation",
    "stabilizationCriteria",
    "stabilizationCriteriaFile",
    "timeStep"
})
@XmlSeeAlso({
    BioGearsConfigurationData.class
})
public class PhysiologyEngineConfigurationData
    extends ObjectData
{

    @XmlElement(name = "ECGDataFile")
    protected String ecgDataFile;
    @XmlElement(name = "KelmanEquation")
    protected KelmanEquationData kelmanEquation;
    @XmlElement(name = "StabilizationCriteria")
    protected PhysiologyEngineStabilizationData stabilizationCriteria;
    @XmlElement(name = "StabilizationCriteriaFile")
    protected String stabilizationCriteriaFile;
    @XmlElement(name = "TimeStep")
    protected ScalarTimeData timeStep;

    /**
     * Gets the value of the ecgDataFile property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getECGDataFile() {
        return ecgDataFile;
    }

    /**
     * Sets the value of the ecgDataFile property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setECGDataFile(String value) {
        this.ecgDataFile = value;
    }

    /**
     * Gets the value of the kelmanEquation property.
     * 
     * @return
     *     possible object is
     *     {@link KelmanEquationData }
     *     
     */
    public KelmanEquationData getKelmanEquation() {
        return kelmanEquation;
    }

    /**
     * Sets the value of the kelmanEquation property.
     * 
     * @param value
     *     allowed object is
     *     {@link KelmanEquationData }
     *     
     */
    public void setKelmanEquation(KelmanEquationData value) {
        this.kelmanEquation = value;
    }

    /**
     * Gets the value of the stabilizationCriteria property.
     * 
     * @return
     *     possible object is
     *     {@link PhysiologyEngineStabilizationData }
     *     
     */
    public PhysiologyEngineStabilizationData getStabilizationCriteria() {
        return stabilizationCriteria;
    }

    /**
     * Sets the value of the stabilizationCriteria property.
     * 
     * @param value
     *     allowed object is
     *     {@link PhysiologyEngineStabilizationData }
     *     
     */
    public void setStabilizationCriteria(PhysiologyEngineStabilizationData value) {
        this.stabilizationCriteria = value;
    }

    /**
     * Gets the value of the stabilizationCriteriaFile property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getStabilizationCriteriaFile() {
        return stabilizationCriteriaFile;
    }

    /**
     * Sets the value of the stabilizationCriteriaFile property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setStabilizationCriteriaFile(String value) {
        this.stabilizationCriteriaFile = value;
    }

    /**
     * Gets the value of the timeStep property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarTimeData }
     *     
     */
    public ScalarTimeData getTimeStep() {
        return timeStep;
    }

    /**
     * Sets the value of the timeStep property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarTimeData }
     *     
     */
    public void setTimeStep(ScalarTimeData value) {
        this.timeStep = value;
    }

}

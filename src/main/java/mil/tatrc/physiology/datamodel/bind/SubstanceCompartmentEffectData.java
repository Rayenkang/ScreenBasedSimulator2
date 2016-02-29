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
 * <p>Java class for SubstanceCompartmentEffectData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="SubstanceCompartmentEffectData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}ObjectData">
 *       &lt;sequence>
 *         &lt;element name="MassCleared" type="{uri:/mil/tatrc/physiology/datamodel}ScalarMassData" minOccurs="0"/>
 *         &lt;element name="MassExcreted" type="{uri:/mil/tatrc/physiology/datamodel}ScalarMassData" minOccurs="0"/>
 *         &lt;element name="PartitionCoefficient" type="{uri:/mil/tatrc/physiology/datamodel}ScalarData" minOccurs="0"/>
 *         &lt;element name="PermeabilitySurfaceAreaProduct" type="{uri:/mil/tatrc/physiology/datamodel}ScalarData" minOccurs="0"/>
 *         &lt;element name="ClearanceModifier" type="{uri:/mil/tatrc/physiology/datamodel}ScalarData" minOccurs="0"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "SubstanceCompartmentEffectData", propOrder = {
    "massCleared",
    "massExcreted",
    "partitionCoefficient",
    "permeabilitySurfaceAreaProduct",
    "clearanceModifier"
})
@XmlSeeAlso({
    SubstanceAnatomyEffectData.class
})
public abstract class SubstanceCompartmentEffectData
    extends ObjectData
{

    @XmlElement(name = "MassCleared")
    protected ScalarMassData massCleared;
    @XmlElement(name = "MassExcreted")
    protected ScalarMassData massExcreted;
    @XmlElement(name = "PartitionCoefficient")
    protected ScalarData partitionCoefficient;
    @XmlElement(name = "PermeabilitySurfaceAreaProduct")
    protected ScalarData permeabilitySurfaceAreaProduct;
    @XmlElement(name = "ClearanceModifier")
    protected ScalarData clearanceModifier;

    /**
     * Gets the value of the massCleared property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarMassData }
     *     
     */
    public ScalarMassData getMassCleared() {
        return massCleared;
    }

    /**
     * Sets the value of the massCleared property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarMassData }
     *     
     */
    public void setMassCleared(ScalarMassData value) {
        this.massCleared = value;
    }

    /**
     * Gets the value of the massExcreted property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarMassData }
     *     
     */
    public ScalarMassData getMassExcreted() {
        return massExcreted;
    }

    /**
     * Sets the value of the massExcreted property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarMassData }
     *     
     */
    public void setMassExcreted(ScalarMassData value) {
        this.massExcreted = value;
    }

    /**
     * Gets the value of the partitionCoefficient property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarData }
     *     
     */
    public ScalarData getPartitionCoefficient() {
        return partitionCoefficient;
    }

    /**
     * Sets the value of the partitionCoefficient property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarData }
     *     
     */
    public void setPartitionCoefficient(ScalarData value) {
        this.partitionCoefficient = value;
    }

    /**
     * Gets the value of the permeabilitySurfaceAreaProduct property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarData }
     *     
     */
    public ScalarData getPermeabilitySurfaceAreaProduct() {
        return permeabilitySurfaceAreaProduct;
    }

    /**
     * Sets the value of the permeabilitySurfaceAreaProduct property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarData }
     *     
     */
    public void setPermeabilitySurfaceAreaProduct(ScalarData value) {
        this.permeabilitySurfaceAreaProduct = value;
    }

    /**
     * Gets the value of the clearanceModifier property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarData }
     *     
     */
    public ScalarData getClearanceModifier() {
        return clearanceModifier;
    }

    /**
     * Sets the value of the clearanceModifier property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarData }
     *     
     */
    public void setClearanceModifier(ScalarData value) {
        this.clearanceModifier = value;
    }

}
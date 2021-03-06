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
 * <p>Java class for ActiveCoolingData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="ActiveCoolingData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}ObjectData">
 *       &lt;sequence>
 *         &lt;element name="CoolingPower" type="{uri:/mil/tatrc/physiology/datamodel}ScalarPowerData"/>
 *         &lt;element name="CooledSurfaceArea" type="{uri:/mil/tatrc/physiology/datamodel}ScalarAreaData" minOccurs="0"/>
 *         &lt;element name="CooledSurfaceAreaFraction" type="{uri:/mil/tatrc/physiology/datamodel}ScalarFractionData" minOccurs="0"/>
 *       &lt;/sequence>
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "ActiveCoolingData", propOrder = {
    "coolingPower",
    "cooledSurfaceArea",
    "cooledSurfaceAreaFraction"
})
public class ActiveCoolingData
    extends ObjectData
{

    @XmlElement(name = "CoolingPower", required = true)
    protected ScalarPowerData coolingPower;
    @XmlElement(name = "CooledSurfaceArea")
    protected ScalarAreaData cooledSurfaceArea;
    @XmlElement(name = "CooledSurfaceAreaFraction")
    protected ScalarFractionData cooledSurfaceAreaFraction;

    /**
     * Gets the value of the coolingPower property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarPowerData }
     *     
     */
    public ScalarPowerData getCoolingPower() {
        return coolingPower;
    }

    /**
     * Sets the value of the coolingPower property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarPowerData }
     *     
     */
    public void setCoolingPower(ScalarPowerData value) {
        this.coolingPower = value;
    }

    /**
     * Gets the value of the cooledSurfaceArea property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarAreaData }
     *     
     */
    public ScalarAreaData getCooledSurfaceArea() {
        return cooledSurfaceArea;
    }

    /**
     * Sets the value of the cooledSurfaceArea property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarAreaData }
     *     
     */
    public void setCooledSurfaceArea(ScalarAreaData value) {
        this.cooledSurfaceArea = value;
    }

    /**
     * Gets the value of the cooledSurfaceAreaFraction property.
     * 
     * @return
     *     possible object is
     *     {@link ScalarFractionData }
     *     
     */
    public ScalarFractionData getCooledSurfaceAreaFraction() {
        return cooledSurfaceAreaFraction;
    }

    /**
     * Sets the value of the cooledSurfaceAreaFraction property.
     * 
     * @param value
     *     allowed object is
     *     {@link ScalarFractionData }
     *     
     */
    public void setCooledSurfaceAreaFraction(ScalarFractionData value) {
        this.cooledSurfaceAreaFraction = value;
    }

}

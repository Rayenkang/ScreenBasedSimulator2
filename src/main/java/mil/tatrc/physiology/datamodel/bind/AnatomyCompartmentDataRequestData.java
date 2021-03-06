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
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for AnatomyCompartmentDataRequestData complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="AnatomyCompartmentDataRequestData">
 *   &lt;complexContent>
 *     &lt;extension base="{uri:/mil/tatrc/physiology/datamodel}DataRequestData">
 *       &lt;attribute name="Compartment" use="required" type="{uri:/mil/tatrc/physiology/datamodel}enumAnatomy" />
 *       &lt;attribute name="Type" use="required" type="{uri:/mil/tatrc/physiology/datamodel}enumCompartmentType" />
 *       &lt;attribute name="Substance" type="{http://www.w3.org/2001/XMLSchema}string" />
 *     &lt;/extension>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "AnatomyCompartmentDataRequestData")
public class AnatomyCompartmentDataRequestData
    extends DataRequestData
{

    @XmlAttribute(name = "Compartment", required = true)
    protected EnumAnatomy compartment;
    @XmlAttribute(name = "Type", required = true)
    protected EnumCompartmentType type;
    @XmlAttribute(name = "Substance")
    protected String substance;

    /**
     * Gets the value of the compartment property.
     * 
     * @return
     *     possible object is
     *     {@link EnumAnatomy }
     *     
     */
    public EnumAnatomy getCompartment() {
        return compartment;
    }

    /**
     * Sets the value of the compartment property.
     * 
     * @param value
     *     allowed object is
     *     {@link EnumAnatomy }
     *     
     */
    public void setCompartment(EnumAnatomy value) {
        this.compartment = value;
    }

    /**
     * Gets the value of the type property.
     * 
     * @return
     *     possible object is
     *     {@link EnumCompartmentType }
     *     
     */
    public EnumCompartmentType getType() {
        return type;
    }

    /**
     * Sets the value of the type property.
     * 
     * @param value
     *     allowed object is
     *     {@link EnumCompartmentType }
     *     
     */
    public void setType(EnumCompartmentType value) {
        this.type = value;
    }

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

}

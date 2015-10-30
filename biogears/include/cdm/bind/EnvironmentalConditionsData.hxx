// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

/**
 * @file
 * @brief Generated from EnvironmentalConditionsData.xsd.
 */

#ifndef ENVIRONMENTAL_CONDITIONS_DATA_HXX
#define ENVIRONMENTAL_CONDITIONS_DATA_HXX

#ifndef XSD_CXX11
#define XSD_CXX11
#endif

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include "cdm-schema.hxx"

// Forward declarations.
//
namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class EnvironmentalConditionsData;
      }
    }
  }
}


#include <memory>    // ::std::unique_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search
#include <utility>   // std::move

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "ObjectData.hxx"

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class enumSurroundingType;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class ScalarMassPerVolumeData;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class ScalarLengthPerTimeData;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class ScalarTemperatureData;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class ScalarPressureData;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class ScalarHeatResistanceAreaData;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class ScalarFractionData;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class SubstanceFractionData;
      }
    }
  }
}

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      /**
       * @brief C++ namespace for the %uri:/mil/tatrc/physiology/datamodel
       * schema namespace.
       */
      namespace datamodel
      {
        /**
         * @brief Class corresponding to the %EnvironmentalConditionsData schema type.
         *
         * @nosubgrouping
         */
        class __attribute__ ((visibility ("default"))) EnvironmentalConditionsData: public ::mil::tatrc::physiology::datamodel::ObjectData
        {
          public:
          /**
           * @name SurroundingType
           *
           * @brief Accessor and modifier functions for the %SurroundingType
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::enumSurroundingType SurroundingType_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< SurroundingType_type > SurroundingType_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< SurroundingType_type, char > SurroundingType_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const SurroundingType_optional&
          SurroundingType () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          SurroundingType_optional&
          SurroundingType ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          SurroundingType (const SurroundingType_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          SurroundingType (const SurroundingType_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          SurroundingType (::std::unique_ptr< SurroundingType_type > p);

          //@}

          /**
           * @name AirDensity
           *
           * @brief Accessor and modifier functions for the %AirDensity
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassPerVolumeData AirDensity_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< AirDensity_type > AirDensity_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< AirDensity_type, char > AirDensity_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const AirDensity_optional&
          AirDensity () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          AirDensity_optional&
          AirDensity ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          AirDensity (const AirDensity_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          AirDensity (const AirDensity_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          AirDensity (::std::unique_ptr< AirDensity_type > p);

          //@}

          /**
           * @name AirVelocity
           *
           * @brief Accessor and modifier functions for the %AirVelocity
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarLengthPerTimeData AirVelocity_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< AirVelocity_type > AirVelocity_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< AirVelocity_type, char > AirVelocity_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const AirVelocity_optional&
          AirVelocity () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          AirVelocity_optional&
          AirVelocity ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          AirVelocity (const AirVelocity_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          AirVelocity (const AirVelocity_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          AirVelocity (::std::unique_ptr< AirVelocity_type > p);

          //@}

          /**
           * @name AmbientTemperature
           *
           * @brief Accessor and modifier functions for the %AmbientTemperature
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarTemperatureData AmbientTemperature_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< AmbientTemperature_type > AmbientTemperature_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< AmbientTemperature_type, char > AmbientTemperature_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const AmbientTemperature_optional&
          AmbientTemperature () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          AmbientTemperature_optional&
          AmbientTemperature ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          AmbientTemperature (const AmbientTemperature_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          AmbientTemperature (const AmbientTemperature_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          AmbientTemperature (::std::unique_ptr< AmbientTemperature_type > p);

          //@}

          /**
           * @name AtmosphericPressure
           *
           * @brief Accessor and modifier functions for the %AtmosphericPressure
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarPressureData AtmosphericPressure_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< AtmosphericPressure_type > AtmosphericPressure_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< AtmosphericPressure_type, char > AtmosphericPressure_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const AtmosphericPressure_optional&
          AtmosphericPressure () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          AtmosphericPressure_optional&
          AtmosphericPressure ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          AtmosphericPressure (const AtmosphericPressure_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          AtmosphericPressure (const AtmosphericPressure_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          AtmosphericPressure (::std::unique_ptr< AtmosphericPressure_type > p);

          //@}

          /**
           * @name ClothingResistance
           *
           * @brief Accessor and modifier functions for the %ClothingResistance
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarHeatResistanceAreaData ClothingResistance_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< ClothingResistance_type > ClothingResistance_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< ClothingResistance_type, char > ClothingResistance_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const ClothingResistance_optional&
          ClothingResistance () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          ClothingResistance_optional&
          ClothingResistance ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          ClothingResistance (const ClothingResistance_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          ClothingResistance (const ClothingResistance_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          ClothingResistance (::std::unique_ptr< ClothingResistance_type > p);

          //@}

          /**
           * @name Emissivity
           *
           * @brief Accessor and modifier functions for the %Emissivity
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarFractionData Emissivity_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Emissivity_type > Emissivity_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Emissivity_type, char > Emissivity_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Emissivity_optional&
          Emissivity () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Emissivity_optional&
          Emissivity ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Emissivity (const Emissivity_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          Emissivity (const Emissivity_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Emissivity (::std::unique_ptr< Emissivity_type > p);

          //@}

          /**
           * @name MeanRadiantTemperature
           *
           * @brief Accessor and modifier functions for the %MeanRadiantTemperature
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarTemperatureData MeanRadiantTemperature_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< MeanRadiantTemperature_type > MeanRadiantTemperature_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< MeanRadiantTemperature_type, char > MeanRadiantTemperature_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const MeanRadiantTemperature_optional&
          MeanRadiantTemperature () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          MeanRadiantTemperature_optional&
          MeanRadiantTemperature ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          MeanRadiantTemperature (const MeanRadiantTemperature_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          MeanRadiantTemperature (const MeanRadiantTemperature_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          MeanRadiantTemperature (::std::unique_ptr< MeanRadiantTemperature_type > p);

          //@}

          /**
           * @name RelativeHumidity
           *
           * @brief Accessor and modifier functions for the %RelativeHumidity
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarFractionData RelativeHumidity_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< RelativeHumidity_type > RelativeHumidity_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< RelativeHumidity_type, char > RelativeHumidity_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const RelativeHumidity_optional&
          RelativeHumidity () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          RelativeHumidity_optional&
          RelativeHumidity ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          RelativeHumidity (const RelativeHumidity_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          RelativeHumidity (const RelativeHumidity_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          RelativeHumidity (::std::unique_ptr< RelativeHumidity_type > p);

          //@}

          /**
           * @name RespirationAmbientTemperature
           *
           * @brief Accessor and modifier functions for the %RespirationAmbientTemperature
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarTemperatureData RespirationAmbientTemperature_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< RespirationAmbientTemperature_type > RespirationAmbientTemperature_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< RespirationAmbientTemperature_type, char > RespirationAmbientTemperature_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const RespirationAmbientTemperature_optional&
          RespirationAmbientTemperature () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          RespirationAmbientTemperature_optional&
          RespirationAmbientTemperature ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          RespirationAmbientTemperature (const RespirationAmbientTemperature_type& x);

          /**
           * @brief Set the element value.
           *
           * @param x An optional container with the new value to set.
           *
           * If the value is present in @a x then this function makes a copy 
           * of this value and sets it as the new value of the element.
           * Otherwise the element container is set the 'not present' state.
           */
          void
          RespirationAmbientTemperature (const RespirationAmbientTemperature_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          RespirationAmbientTemperature (::std::unique_ptr< RespirationAmbientTemperature_type > p);

          //@}

          /**
           * @name AmbientSubstance
           *
           * @brief Accessor and modifier functions for the %AmbientSubstance
           * sequence element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::SubstanceFractionData AmbientSubstance_type;

          /**
           * @brief Element sequence container type.
           */
          typedef ::xsd::cxx::tree::sequence< AmbientSubstance_type > AmbientSubstance_sequence;

          /**
           * @brief Element iterator type.
           */
          typedef AmbientSubstance_sequence::iterator AmbientSubstance_iterator;

          /**
           * @brief Element constant iterator type.
           */
          typedef AmbientSubstance_sequence::const_iterator AmbientSubstance_const_iterator;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< AmbientSubstance_type, char > AmbientSubstance_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * sequence.
           *
           * @return A constant reference to the sequence container.
           */
          const AmbientSubstance_sequence&
          AmbientSubstance () const;

          /**
           * @brief Return a read-write reference to the element sequence.
           *
           * @return A reference to the sequence container.
           */
          AmbientSubstance_sequence&
          AmbientSubstance ();

          /**
           * @brief Copy elements from a given sequence.
           *
           * @param s A sequence to copy elements from.
           *
           * For each element in @a s this function makes a copy and adds it 
           * to the sequence. Note that this operation completely changes the 
           * sequence and all old elements will be lost.
           */
          void
          AmbientSubstance (const AmbientSubstance_sequence& s);

          //@}

          /**
           * @name Constructors
           */
          //@{

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes.
           */
          EnvironmentalConditionsData ();

          /**
           * @brief Create an instance from a DOM element.
           *
           * @param e A DOM element to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          EnvironmentalConditionsData (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f = 0,
                                       ::xml_schema::container* c = 0);

          /**
           * @brief Copy constructor.
           *
           * @param x An instance to make a copy of.
           * @param f Flags to create the copy with.
           * @param c A pointer to the object that will contain the copy.
           *
           * For polymorphic object models use the @c _clone function instead.
           */
          EnvironmentalConditionsData (const EnvironmentalConditionsData& x,
                                       ::xml_schema::flags f = 0,
                                       ::xml_schema::container* c = 0);

          /**
           * @brief Copy the instance polymorphically.
           *
           * @param f Flags to create the copy with.
           * @param c A pointer to the object that will contain the copy.
           * @return A pointer to the dynamically allocated copy.
           *
           * This function ensures that the dynamic type of the instance is
           * used for copying and should be used for polymorphic object
           * models instead of the copy constructor.
           */
          virtual EnvironmentalConditionsData*
          _clone (::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0) const;

          /**
           * @brief Copy assignment operator.
           *
           * @param x An instance to make a copy of.
           * @return A reference to itself.
           *
           * For polymorphic object models use the @c _clone function instead.
           */
          EnvironmentalConditionsData&
          operator= (const EnvironmentalConditionsData& x);

          //@}

          /**
           * @brief Destructor.
           */
          virtual 
          ~EnvironmentalConditionsData ();

          // Implementation.
          //

          //@cond

          protected:
          void
          parse (::xsd::cxx::xml::dom::parser< char >&,
                 ::xml_schema::flags);

          protected:
          SurroundingType_optional SurroundingType_;
          AirDensity_optional AirDensity_;
          AirVelocity_optional AirVelocity_;
          AmbientTemperature_optional AmbientTemperature_;
          AtmosphericPressure_optional AtmosphericPressure_;
          ClothingResistance_optional ClothingResistance_;
          Emissivity_optional Emissivity_;
          MeanRadiantTemperature_optional MeanRadiantTemperature_;
          RelativeHumidity_optional RelativeHumidity_;
          RespirationAmbientTemperature_optional RespirationAmbientTemperature_;
          AmbientSubstance_sequence AmbientSubstance_;

          //@endcond
        };
      }
    }
  }
}

#include <iosfwd>

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        __attribute__ ((visibility ("default")))
        ::std::ostream&
        operator<< (::std::ostream&, const EnvironmentalConditionsData&);
      }
    }
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
      }
    }
  }
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        __attribute__ ((visibility ("default")))
        void
        operator<< (::xercesc::DOMElement&, const EnvironmentalConditionsData&);
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
#include "decimal.hxx"

#include "double-parsing.hxx"
#include "decimal-parsing.hxx"

#include "double-serialization.hxx"
#include "decimal-serialization.hxx"
//
// End epilogue.

#endif // ENVIRONMENTAL_CONDITIONS_DATA_HXX

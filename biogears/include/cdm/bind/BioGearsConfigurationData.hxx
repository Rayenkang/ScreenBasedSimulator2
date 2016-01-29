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
 * @brief Generated from BioGearsConfigurationData.xsd.
 */

#ifndef BIO_GEARS_CONFIGURATION_DATA_HXX
#define BIO_GEARS_CONFIGURATION_DATA_HXX

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
        class BioGearsConfigurationData;
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

#include "PhysiologyEngineConfigurationData.hxx"

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class BaroreceptorConfiguration;
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
        class BloodChemistryConfiguration;
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
        class CardiovascularConfiguration;
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
        class CircuitConfiguration;
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
        class ConstantsConfiguration;
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
        class DrugsConfiguration;
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
        class EnergyConfiguration;
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
        class EnvironmentConfiguration;
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
        class GastrointestinalConfiguration;
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
        class RenalConfiguration;
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
        class RespiratoryConfiguration;
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
         * @brief Class corresponding to the %BioGearsConfigurationData schema type.
         *
         * @nosubgrouping
         */
        class BioGearsConfigurationData: public ::mil::tatrc::physiology::datamodel::PhysiologyEngineConfigurationData
        {
          public:
          /**
           * @name BaroreceptorConfiguration
           *
           * @brief Accessor and modifier functions for the %BaroreceptorConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::BaroreceptorConfiguration BaroreceptorConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< BaroreceptorConfiguration_type > BaroreceptorConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< BaroreceptorConfiguration_type, char > BaroreceptorConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const BaroreceptorConfiguration_optional&
          BaroreceptorConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          BaroreceptorConfiguration_optional&
          BaroreceptorConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          BaroreceptorConfiguration (const BaroreceptorConfiguration_type& x);

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
          BaroreceptorConfiguration (const BaroreceptorConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          BaroreceptorConfiguration (::std::unique_ptr< BaroreceptorConfiguration_type > p);

          //@}

          /**
           * @name BloodChemistryConfiguration
           *
           * @brief Accessor and modifier functions for the %BloodChemistryConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::BloodChemistryConfiguration BloodChemistryConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< BloodChemistryConfiguration_type > BloodChemistryConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< BloodChemistryConfiguration_type, char > BloodChemistryConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const BloodChemistryConfiguration_optional&
          BloodChemistryConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          BloodChemistryConfiguration_optional&
          BloodChemistryConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          BloodChemistryConfiguration (const BloodChemistryConfiguration_type& x);

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
          BloodChemistryConfiguration (const BloodChemistryConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          BloodChemistryConfiguration (::std::unique_ptr< BloodChemistryConfiguration_type > p);

          //@}

          /**
           * @name CardiovascularConfiguration
           *
           * @brief Accessor and modifier functions for the %CardiovascularConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::CardiovascularConfiguration CardiovascularConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< CardiovascularConfiguration_type > CardiovascularConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< CardiovascularConfiguration_type, char > CardiovascularConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const CardiovascularConfiguration_optional&
          CardiovascularConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          CardiovascularConfiguration_optional&
          CardiovascularConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          CardiovascularConfiguration (const CardiovascularConfiguration_type& x);

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
          CardiovascularConfiguration (const CardiovascularConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          CardiovascularConfiguration (::std::unique_ptr< CardiovascularConfiguration_type > p);

          //@}

          /**
           * @name CircuitConfiguration
           *
           * @brief Accessor and modifier functions for the %CircuitConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::CircuitConfiguration CircuitConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< CircuitConfiguration_type > CircuitConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< CircuitConfiguration_type, char > CircuitConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const CircuitConfiguration_optional&
          CircuitConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          CircuitConfiguration_optional&
          CircuitConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          CircuitConfiguration (const CircuitConfiguration_type& x);

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
          CircuitConfiguration (const CircuitConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          CircuitConfiguration (::std::unique_ptr< CircuitConfiguration_type > p);

          //@}

          /**
           * @name ConstantsConfiguration
           *
           * @brief Accessor and modifier functions for the %ConstantsConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ConstantsConfiguration ConstantsConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< ConstantsConfiguration_type > ConstantsConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< ConstantsConfiguration_type, char > ConstantsConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const ConstantsConfiguration_optional&
          ConstantsConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          ConstantsConfiguration_optional&
          ConstantsConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          ConstantsConfiguration (const ConstantsConfiguration_type& x);

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
          ConstantsConfiguration (const ConstantsConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          ConstantsConfiguration (::std::unique_ptr< ConstantsConfiguration_type > p);

          //@}

          /**
           * @name DrugsConfiguration
           *
           * @brief Accessor and modifier functions for the %DrugsConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::DrugsConfiguration DrugsConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< DrugsConfiguration_type > DrugsConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< DrugsConfiguration_type, char > DrugsConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const DrugsConfiguration_optional&
          DrugsConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          DrugsConfiguration_optional&
          DrugsConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          DrugsConfiguration (const DrugsConfiguration_type& x);

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
          DrugsConfiguration (const DrugsConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          DrugsConfiguration (::std::unique_ptr< DrugsConfiguration_type > p);

          //@}

          /**
           * @name EnergyConfiguration
           *
           * @brief Accessor and modifier functions for the %EnergyConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::EnergyConfiguration EnergyConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< EnergyConfiguration_type > EnergyConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< EnergyConfiguration_type, char > EnergyConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const EnergyConfiguration_optional&
          EnergyConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          EnergyConfiguration_optional&
          EnergyConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          EnergyConfiguration (const EnergyConfiguration_type& x);

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
          EnergyConfiguration (const EnergyConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          EnergyConfiguration (::std::unique_ptr< EnergyConfiguration_type > p);

          //@}

          /**
           * @name EnvironmentConfiguration
           *
           * @brief Accessor and modifier functions for the %EnvironmentConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::EnvironmentConfiguration EnvironmentConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< EnvironmentConfiguration_type > EnvironmentConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< EnvironmentConfiguration_type, char > EnvironmentConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const EnvironmentConfiguration_optional&
          EnvironmentConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          EnvironmentConfiguration_optional&
          EnvironmentConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          EnvironmentConfiguration (const EnvironmentConfiguration_type& x);

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
          EnvironmentConfiguration (const EnvironmentConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          EnvironmentConfiguration (::std::unique_ptr< EnvironmentConfiguration_type > p);

          //@}

          /**
           * @name GastrointestinalConfiguration
           *
           * @brief Accessor and modifier functions for the %GastrointestinalConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::GastrointestinalConfiguration GastrointestinalConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< GastrointestinalConfiguration_type > GastrointestinalConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< GastrointestinalConfiguration_type, char > GastrointestinalConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const GastrointestinalConfiguration_optional&
          GastrointestinalConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          GastrointestinalConfiguration_optional&
          GastrointestinalConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          GastrointestinalConfiguration (const GastrointestinalConfiguration_type& x);

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
          GastrointestinalConfiguration (const GastrointestinalConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          GastrointestinalConfiguration (::std::unique_ptr< GastrointestinalConfiguration_type > p);

          //@}

          /**
           * @name RenalConfiguration
           *
           * @brief Accessor and modifier functions for the %RenalConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::RenalConfiguration RenalConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< RenalConfiguration_type > RenalConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< RenalConfiguration_type, char > RenalConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const RenalConfiguration_optional&
          RenalConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          RenalConfiguration_optional&
          RenalConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          RenalConfiguration (const RenalConfiguration_type& x);

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
          RenalConfiguration (const RenalConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          RenalConfiguration (::std::unique_ptr< RenalConfiguration_type > p);

          //@}

          /**
           * @name RespiratoryConfiguration
           *
           * @brief Accessor and modifier functions for the %RespiratoryConfiguration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::RespiratoryConfiguration RespiratoryConfiguration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< RespiratoryConfiguration_type > RespiratoryConfiguration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< RespiratoryConfiguration_type, char > RespiratoryConfiguration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const RespiratoryConfiguration_optional&
          RespiratoryConfiguration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          RespiratoryConfiguration_optional&
          RespiratoryConfiguration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          RespiratoryConfiguration (const RespiratoryConfiguration_type& x);

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
          RespiratoryConfiguration (const RespiratoryConfiguration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          RespiratoryConfiguration (::std::unique_ptr< RespiratoryConfiguration_type > p);

          //@}

          /**
           * @name Constructors
           */
          //@{

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes.
           */
          BioGearsConfigurationData ();

          /**
           * @brief Create an instance from a DOM element.
           *
           * @param e A DOM element to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          BioGearsConfigurationData (const ::xercesc::DOMElement& e,
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
          BioGearsConfigurationData (const BioGearsConfigurationData& x,
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
          virtual BioGearsConfigurationData*
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
          BioGearsConfigurationData&
          operator= (const BioGearsConfigurationData& x);

          //@}

          /**
           * @brief Destructor.
           */
          virtual 
          ~BioGearsConfigurationData ();

          // Implementation.
          //

          //@cond

          protected:
          void
          parse (::xsd::cxx::xml::dom::parser< char >&,
                 ::xml_schema::flags);

          protected:
          BaroreceptorConfiguration_optional BaroreceptorConfiguration_;
          BloodChemistryConfiguration_optional BloodChemistryConfiguration_;
          CardiovascularConfiguration_optional CardiovascularConfiguration_;
          CircuitConfiguration_optional CircuitConfiguration_;
          ConstantsConfiguration_optional ConstantsConfiguration_;
          DrugsConfiguration_optional DrugsConfiguration_;
          EnergyConfiguration_optional EnergyConfiguration_;
          EnvironmentConfiguration_optional EnvironmentConfiguration_;
          GastrointestinalConfiguration_optional GastrointestinalConfiguration_;
          RenalConfiguration_optional RenalConfiguration_;
          RespiratoryConfiguration_optional RespiratoryConfiguration_;

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
        ::std::ostream&
        operator<< (::std::ostream&, const BioGearsConfigurationData&);
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
        void
        operator<< (::xercesc::DOMElement&, const BioGearsConfigurationData&);
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

#endif // BIO_GEARS_CONFIGURATION_DATA_HXX

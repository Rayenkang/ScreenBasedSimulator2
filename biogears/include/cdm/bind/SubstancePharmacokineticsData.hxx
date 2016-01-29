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
 * @brief Generated from SubstancePharmacokineticsData.xsd.
 */

#ifndef SUBSTANCE_PHARMACOKINETICS_DATA_HXX
#define SUBSTANCE_PHARMACOKINETICS_DATA_HXX

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
        class SubstancePharmacokineticsData;
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
        class ScalarData;
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
        class enumSubstanceBindingProtein;
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
        class enumSubstanceIonicState;
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
         * @brief Class corresponding to the %SubstancePharmacokineticsData schema type.
         *
         * @nosubgrouping
         */
        class SubstancePharmacokineticsData: public ::mil::tatrc::physiology::datamodel::ObjectData
        {
          public:
          /**
           * @name AcidDissociationConstant
           *
           * @brief Accessor and modifier functions for the %AcidDissociationConstant
           * required element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarData AcidDissociationConstant_type;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< AcidDissociationConstant_type, char > AcidDissociationConstant_traits;

          /**
           * @brief Return a read-only (constant) reference to the element.
           *
           * @return A constant reference to the element.
           */
          const AcidDissociationConstant_type&
          AcidDissociationConstant () const;

          /**
           * @brief Return a read-write reference to the element.
           *
           * @return A reference to the element.
           */
          AcidDissociationConstant_type&
          AcidDissociationConstant ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          AcidDissociationConstant (const AcidDissociationConstant_type& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          AcidDissociationConstant (::std::unique_ptr< AcidDissociationConstant_type > p);

          //@}

          /**
           * @name BindingProtein
           *
           * @brief Accessor and modifier functions for the %BindingProtein
           * required element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::enumSubstanceBindingProtein BindingProtein_type;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< BindingProtein_type, char > BindingProtein_traits;

          /**
           * @brief Return a read-only (constant) reference to the element.
           *
           * @return A constant reference to the element.
           */
          const BindingProtein_type&
          BindingProtein () const;

          /**
           * @brief Return a read-write reference to the element.
           *
           * @return A reference to the element.
           */
          BindingProtein_type&
          BindingProtein ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          BindingProtein (const BindingProtein_type& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          BindingProtein (::std::unique_ptr< BindingProtein_type > p);

          //@}

          /**
           * @name BloodPlasmaRatio
           *
           * @brief Accessor and modifier functions for the %BloodPlasmaRatio
           * required element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarData BloodPlasmaRatio_type;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< BloodPlasmaRatio_type, char > BloodPlasmaRatio_traits;

          /**
           * @brief Return a read-only (constant) reference to the element.
           *
           * @return A constant reference to the element.
           */
          const BloodPlasmaRatio_type&
          BloodPlasmaRatio () const;

          /**
           * @brief Return a read-write reference to the element.
           *
           * @return A reference to the element.
           */
          BloodPlasmaRatio_type&
          BloodPlasmaRatio ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          BloodPlasmaRatio (const BloodPlasmaRatio_type& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          BloodPlasmaRatio (::std::unique_ptr< BloodPlasmaRatio_type > p);

          //@}

          /**
           * @name FractionUnboundInPlasma
           *
           * @brief Accessor and modifier functions for the %FractionUnboundInPlasma
           * required element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarFractionData FractionUnboundInPlasma_type;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< FractionUnboundInPlasma_type, char > FractionUnboundInPlasma_traits;

          /**
           * @brief Return a read-only (constant) reference to the element.
           *
           * @return A constant reference to the element.
           */
          const FractionUnboundInPlasma_type&
          FractionUnboundInPlasma () const;

          /**
           * @brief Return a read-write reference to the element.
           *
           * @return A reference to the element.
           */
          FractionUnboundInPlasma_type&
          FractionUnboundInPlasma ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          FractionUnboundInPlasma (const FractionUnboundInPlasma_type& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          FractionUnboundInPlasma (::std::unique_ptr< FractionUnboundInPlasma_type > p);

          //@}

          /**
           * @name IonicState
           *
           * @brief Accessor and modifier functions for the %IonicState
           * required element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::enumSubstanceIonicState IonicState_type;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< IonicState_type, char > IonicState_traits;

          /**
           * @brief Return a read-only (constant) reference to the element.
           *
           * @return A constant reference to the element.
           */
          const IonicState_type&
          IonicState () const;

          /**
           * @brief Return a read-write reference to the element.
           *
           * @return A reference to the element.
           */
          IonicState_type&
          IonicState ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          IonicState (const IonicState_type& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          IonicState (::std::unique_ptr< IonicState_type > p);

          //@}

          /**
           * @name LogP
           *
           * @brief Accessor and modifier functions for the %LogP
           * required element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarData LogP_type;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< LogP_type, char > LogP_traits;

          /**
           * @brief Return a read-only (constant) reference to the element.
           *
           * @return A constant reference to the element.
           */
          const LogP_type&
          LogP () const;

          /**
           * @brief Return a read-write reference to the element.
           *
           * @return A reference to the element.
           */
          LogP_type&
          LogP ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          LogP (const LogP_type& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          LogP (::std::unique_ptr< LogP_type > p);

          //@}

          /**
           * @name OralAbsorptionRateConstant
           *
           * @brief Accessor and modifier functions for the %OralAbsorptionRateConstant
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarData OralAbsorptionRateConstant_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< OralAbsorptionRateConstant_type > OralAbsorptionRateConstant_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< OralAbsorptionRateConstant_type, char > OralAbsorptionRateConstant_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const OralAbsorptionRateConstant_optional&
          OralAbsorptionRateConstant () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          OralAbsorptionRateConstant_optional&
          OralAbsorptionRateConstant ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          OralAbsorptionRateConstant (const OralAbsorptionRateConstant_type& x);

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
          OralAbsorptionRateConstant (const OralAbsorptionRateConstant_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          OralAbsorptionRateConstant (::std::unique_ptr< OralAbsorptionRateConstant_type > p);

          //@}

          /**
           * @name Constructors
           */
          //@{

          /**
           * @brief Default constructor.
           *
           * Note that this constructor leaves required elements and
           * attributes uninitialized.
           */
          SubstancePharmacokineticsData ();

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes.
           */
          SubstancePharmacokineticsData (const AcidDissociationConstant_type&,
                                         const BindingProtein_type&,
                                         const BloodPlasmaRatio_type&,
                                         const FractionUnboundInPlasma_type&,
                                         const IonicState_type&,
                                         const LogP_type&);

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes
           * (::std::unique_ptr version).
           *
           * This constructor will try to use the passed values directly
           * instead of making copies.
           */
          SubstancePharmacokineticsData (::std::unique_ptr< AcidDissociationConstant_type >,
                                         const BindingProtein_type&,
                                         ::std::unique_ptr< BloodPlasmaRatio_type >,
                                         ::std::unique_ptr< FractionUnboundInPlasma_type >,
                                         const IonicState_type&,
                                         ::std::unique_ptr< LogP_type >);

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes
           * (::std::unique_ptr version).
           *
           * This constructor will try to use the passed values directly
           * instead of making copies.
           */
          SubstancePharmacokineticsData (::std::unique_ptr< AcidDissociationConstant_type >,
                                         ::std::unique_ptr< BindingProtein_type >,
                                         ::std::unique_ptr< BloodPlasmaRatio_type >,
                                         ::std::unique_ptr< FractionUnboundInPlasma_type >,
                                         ::std::unique_ptr< IonicState_type >,
                                         ::std::unique_ptr< LogP_type >);

          /**
           * @brief Create an instance from a DOM element.
           *
           * @param e A DOM element to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          SubstancePharmacokineticsData (const ::xercesc::DOMElement& e,
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
          SubstancePharmacokineticsData (const SubstancePharmacokineticsData& x,
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
          virtual SubstancePharmacokineticsData*
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
          SubstancePharmacokineticsData&
          operator= (const SubstancePharmacokineticsData& x);

          //@}

          /**
           * @brief Destructor.
           */
          virtual 
          ~SubstancePharmacokineticsData ();

          // Implementation.
          //

          //@cond

          protected:
          void
          parse (::xsd::cxx::xml::dom::parser< char >&,
                 ::xml_schema::flags);

          protected:
          ::xsd::cxx::tree::one< AcidDissociationConstant_type > AcidDissociationConstant_;
          ::xsd::cxx::tree::one< BindingProtein_type > BindingProtein_;
          ::xsd::cxx::tree::one< BloodPlasmaRatio_type > BloodPlasmaRatio_;
          ::xsd::cxx::tree::one< FractionUnboundInPlasma_type > FractionUnboundInPlasma_;
          ::xsd::cxx::tree::one< IonicState_type > IonicState_;
          ::xsd::cxx::tree::one< LogP_type > LogP_;
          OralAbsorptionRateConstant_optional OralAbsorptionRateConstant_;

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
        operator<< (::std::ostream&, const SubstancePharmacokineticsData&);
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
        operator<< (::xercesc::DOMElement&, const SubstancePharmacokineticsData&);
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

#endif // SUBSTANCE_PHARMACOKINETICS_DATA_HXX

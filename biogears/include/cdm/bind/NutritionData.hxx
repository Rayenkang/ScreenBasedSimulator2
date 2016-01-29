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
 * @brief Generated from NutritionData.xsd.
 */

#ifndef NUTRITION_DATA_HXX
#define NUTRITION_DATA_HXX

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
        class NutritionData;
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
        class ScalarMassData;
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
        class ScalarMassPerTimeData;
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
        class ScalarVolumeData;
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
         * @brief Class corresponding to the %NutritionData schema type.
         *
         * @nosubgrouping
         */
        class NutritionData: public ::mil::tatrc::physiology::datamodel::ObjectData
        {
          public:
          /**
           * @name Carbohydrate
           *
           * @brief Accessor and modifier functions for the %Carbohydrate
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassData Carbohydrate_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Carbohydrate_type > Carbohydrate_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Carbohydrate_type, char > Carbohydrate_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Carbohydrate_optional&
          Carbohydrate () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Carbohydrate_optional&
          Carbohydrate ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Carbohydrate (const Carbohydrate_type& x);

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
          Carbohydrate (const Carbohydrate_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Carbohydrate (::std::unique_ptr< Carbohydrate_type > p);

          //@}

          /**
           * @name CarbohydrateDigestionRate
           *
           * @brief Accessor and modifier functions for the %CarbohydrateDigestionRate
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassPerTimeData CarbohydrateDigestionRate_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< CarbohydrateDigestionRate_type > CarbohydrateDigestionRate_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< CarbohydrateDigestionRate_type, char > CarbohydrateDigestionRate_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const CarbohydrateDigestionRate_optional&
          CarbohydrateDigestionRate () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          CarbohydrateDigestionRate_optional&
          CarbohydrateDigestionRate ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          CarbohydrateDigestionRate (const CarbohydrateDigestionRate_type& x);

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
          CarbohydrateDigestionRate (const CarbohydrateDigestionRate_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          CarbohydrateDigestionRate (::std::unique_ptr< CarbohydrateDigestionRate_type > p);

          //@}

          /**
           * @name Fat
           *
           * @brief Accessor and modifier functions for the %Fat
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassData Fat_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Fat_type > Fat_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Fat_type, char > Fat_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Fat_optional&
          Fat () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Fat_optional&
          Fat ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Fat (const Fat_type& x);

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
          Fat (const Fat_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Fat (::std::unique_ptr< Fat_type > p);

          //@}

          /**
           * @name FatDigestionRate
           *
           * @brief Accessor and modifier functions for the %FatDigestionRate
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassPerTimeData FatDigestionRate_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< FatDigestionRate_type > FatDigestionRate_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< FatDigestionRate_type, char > FatDigestionRate_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const FatDigestionRate_optional&
          FatDigestionRate () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          FatDigestionRate_optional&
          FatDigestionRate ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          FatDigestionRate (const FatDigestionRate_type& x);

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
          FatDigestionRate (const FatDigestionRate_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          FatDigestionRate (::std::unique_ptr< FatDigestionRate_type > p);

          //@}

          /**
           * @name Protein
           *
           * @brief Accessor and modifier functions for the %Protein
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassData Protein_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Protein_type > Protein_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Protein_type, char > Protein_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Protein_optional&
          Protein () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Protein_optional&
          Protein ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Protein (const Protein_type& x);

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
          Protein (const Protein_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Protein (::std::unique_ptr< Protein_type > p);

          //@}

          /**
           * @name ProteinDigestionRate
           *
           * @brief Accessor and modifier functions for the %ProteinDigestionRate
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassPerTimeData ProteinDigestionRate_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< ProteinDigestionRate_type > ProteinDigestionRate_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< ProteinDigestionRate_type, char > ProteinDigestionRate_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const ProteinDigestionRate_optional&
          ProteinDigestionRate () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          ProteinDigestionRate_optional&
          ProteinDigestionRate ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          ProteinDigestionRate (const ProteinDigestionRate_type& x);

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
          ProteinDigestionRate (const ProteinDigestionRate_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          ProteinDigestionRate (::std::unique_ptr< ProteinDigestionRate_type > p);

          //@}

          /**
           * @name Calcium
           *
           * @brief Accessor and modifier functions for the %Calcium
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassData Calcium_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Calcium_type > Calcium_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Calcium_type, char > Calcium_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Calcium_optional&
          Calcium () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Calcium_optional&
          Calcium ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Calcium (const Calcium_type& x);

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
          Calcium (const Calcium_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Calcium (::std::unique_ptr< Calcium_type > p);

          //@}

          /**
           * @name Sodium
           *
           * @brief Accessor and modifier functions for the %Sodium
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassData Sodium_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Sodium_type > Sodium_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Sodium_type, char > Sodium_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Sodium_optional&
          Sodium () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Sodium_optional&
          Sodium ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Sodium (const Sodium_type& x);

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
          Sodium (const Sodium_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Sodium (::std::unique_ptr< Sodium_type > p);

          //@}

          /**
           * @name Water
           *
           * @brief Accessor and modifier functions for the %Water
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarVolumeData Water_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Water_type > Water_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Water_type, char > Water_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Water_optional&
          Water () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Water_optional&
          Water ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Water (const Water_type& x);

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
          Water (const Water_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Water (::std::unique_ptr< Water_type > p);

          //@}

          /**
           * @name Constructors
           */
          //@{

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes.
           */
          NutritionData ();

          /**
           * @brief Create an instance from a DOM element.
           *
           * @param e A DOM element to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          NutritionData (const ::xercesc::DOMElement& e,
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
          NutritionData (const NutritionData& x,
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
          virtual NutritionData*
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
          NutritionData&
          operator= (const NutritionData& x);

          //@}

          /**
           * @brief Destructor.
           */
          virtual 
          ~NutritionData ();

          // Implementation.
          //

          //@cond

          protected:
          void
          parse (::xsd::cxx::xml::dom::parser< char >&,
                 ::xml_schema::flags);

          protected:
          Carbohydrate_optional Carbohydrate_;
          CarbohydrateDigestionRate_optional CarbohydrateDigestionRate_;
          Fat_optional Fat_;
          FatDigestionRate_optional FatDigestionRate_;
          Protein_optional Protein_;
          ProteinDigestionRate_optional ProteinDigestionRate_;
          Calcium_optional Calcium_;
          Sodium_optional Sodium_;
          Water_optional Water_;

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
        operator<< (::std::ostream&, const NutritionData&);
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
        operator<< (::xercesc::DOMElement&, const NutritionData&);
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

#endif // NUTRITION_DATA_HXX

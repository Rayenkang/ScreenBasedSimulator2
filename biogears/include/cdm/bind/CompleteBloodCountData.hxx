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
 * @brief Generated from CompleteBloodCountData.xsd.
 */

#ifndef COMPLETE_BLOOD_COUNT_DATA_HXX
#define COMPLETE_BLOOD_COUNT_DATA_HXX

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
        class CompleteBloodCountData;
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

#include "PatientAssessmentData.hxx"

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
        class ScalarAmountPerVolumeData;
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
        class ScalarMassPerAmountData;
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
         * @brief Class corresponding to the %CompleteBloodCountData schema type.
         *
         * @nosubgrouping
         */
        class __attribute__ ((visibility ("default"))) CompleteBloodCountData: public ::mil::tatrc::physiology::datamodel::PatientAssessmentData
        {
          public:
          /**
           * @name Hematocrit
           *
           * @brief Accessor and modifier functions for the %Hematocrit
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarFractionData Hematocrit_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Hematocrit_type > Hematocrit_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Hematocrit_type, char > Hematocrit_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Hematocrit_optional&
          Hematocrit () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Hematocrit_optional&
          Hematocrit ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Hematocrit (const Hematocrit_type& x);

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
          Hematocrit (const Hematocrit_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Hematocrit (::std::unique_ptr< Hematocrit_type > p);

          //@}

          /**
           * @name Hemoglobin
           *
           * @brief Accessor and modifier functions for the %Hemoglobin
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassPerVolumeData Hemoglobin_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< Hemoglobin_type > Hemoglobin_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Hemoglobin_type, char > Hemoglobin_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const Hemoglobin_optional&
          Hemoglobin () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          Hemoglobin_optional&
          Hemoglobin ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Hemoglobin (const Hemoglobin_type& x);

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
          Hemoglobin (const Hemoglobin_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          Hemoglobin (::std::unique_ptr< Hemoglobin_type > p);

          //@}

          /**
           * @name PlateletCount
           *
           * @brief Accessor and modifier functions for the %PlateletCount
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarAmountPerVolumeData PlateletCount_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< PlateletCount_type > PlateletCount_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< PlateletCount_type, char > PlateletCount_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const PlateletCount_optional&
          PlateletCount () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          PlateletCount_optional&
          PlateletCount ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          PlateletCount (const PlateletCount_type& x);

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
          PlateletCount (const PlateletCount_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          PlateletCount (::std::unique_ptr< PlateletCount_type > p);

          //@}

          /**
           * @name MeanCorpuscularHemoglobin
           *
           * @brief Accessor and modifier functions for the %MeanCorpuscularHemoglobin
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassPerAmountData MeanCorpuscularHemoglobin_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< MeanCorpuscularHemoglobin_type > MeanCorpuscularHemoglobin_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< MeanCorpuscularHemoglobin_type, char > MeanCorpuscularHemoglobin_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const MeanCorpuscularHemoglobin_optional&
          MeanCorpuscularHemoglobin () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          MeanCorpuscularHemoglobin_optional&
          MeanCorpuscularHemoglobin ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          MeanCorpuscularHemoglobin (const MeanCorpuscularHemoglobin_type& x);

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
          MeanCorpuscularHemoglobin (const MeanCorpuscularHemoglobin_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          MeanCorpuscularHemoglobin (::std::unique_ptr< MeanCorpuscularHemoglobin_type > p);

          //@}

          /**
           * @name MeanCorpuscularHemoglobinConcentration
           *
           * @brief Accessor and modifier functions for the %MeanCorpuscularHemoglobinConcentration
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarMassPerVolumeData MeanCorpuscularHemoglobinConcentration_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< MeanCorpuscularHemoglobinConcentration_type > MeanCorpuscularHemoglobinConcentration_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< MeanCorpuscularHemoglobinConcentration_type, char > MeanCorpuscularHemoglobinConcentration_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const MeanCorpuscularHemoglobinConcentration_optional&
          MeanCorpuscularHemoglobinConcentration () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          MeanCorpuscularHemoglobinConcentration_optional&
          MeanCorpuscularHemoglobinConcentration ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          MeanCorpuscularHemoglobinConcentration (const MeanCorpuscularHemoglobinConcentration_type& x);

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
          MeanCorpuscularHemoglobinConcentration (const MeanCorpuscularHemoglobinConcentration_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          MeanCorpuscularHemoglobinConcentration (::std::unique_ptr< MeanCorpuscularHemoglobinConcentration_type > p);

          //@}

          /**
           * @name MeanCorpuscularVolume
           *
           * @brief Accessor and modifier functions for the %MeanCorpuscularVolume
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarVolumeData MeanCorpuscularVolume_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< MeanCorpuscularVolume_type > MeanCorpuscularVolume_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< MeanCorpuscularVolume_type, char > MeanCorpuscularVolume_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const MeanCorpuscularVolume_optional&
          MeanCorpuscularVolume () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          MeanCorpuscularVolume_optional&
          MeanCorpuscularVolume ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          MeanCorpuscularVolume (const MeanCorpuscularVolume_type& x);

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
          MeanCorpuscularVolume (const MeanCorpuscularVolume_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          MeanCorpuscularVolume (::std::unique_ptr< MeanCorpuscularVolume_type > p);

          //@}

          /**
           * @name RedBloodCellCount
           *
           * @brief Accessor and modifier functions for the %RedBloodCellCount
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarAmountPerVolumeData RedBloodCellCount_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< RedBloodCellCount_type > RedBloodCellCount_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< RedBloodCellCount_type, char > RedBloodCellCount_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const RedBloodCellCount_optional&
          RedBloodCellCount () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          RedBloodCellCount_optional&
          RedBloodCellCount ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          RedBloodCellCount (const RedBloodCellCount_type& x);

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
          RedBloodCellCount (const RedBloodCellCount_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          RedBloodCellCount (::std::unique_ptr< RedBloodCellCount_type > p);

          //@}

          /**
           * @name WhiteBloodCellCount
           *
           * @brief Accessor and modifier functions for the %WhiteBloodCellCount
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarAmountPerVolumeData WhiteBloodCellCount_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< WhiteBloodCellCount_type > WhiteBloodCellCount_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< WhiteBloodCellCount_type, char > WhiteBloodCellCount_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const WhiteBloodCellCount_optional&
          WhiteBloodCellCount () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          WhiteBloodCellCount_optional&
          WhiteBloodCellCount ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          WhiteBloodCellCount (const WhiteBloodCellCount_type& x);

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
          WhiteBloodCellCount (const WhiteBloodCellCount_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          WhiteBloodCellCount (::std::unique_ptr< WhiteBloodCellCount_type > p);

          //@}

          /**
           * @name Constructors
           */
          //@{

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes.
           */
          CompleteBloodCountData ();

          /**
           * @brief Create an instance from a DOM element.
           *
           * @param e A DOM element to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          CompleteBloodCountData (const ::xercesc::DOMElement& e,
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
          CompleteBloodCountData (const CompleteBloodCountData& x,
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
          virtual CompleteBloodCountData*
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
          CompleteBloodCountData&
          operator= (const CompleteBloodCountData& x);

          //@}

          /**
           * @brief Destructor.
           */
          virtual 
          ~CompleteBloodCountData ();

          // Implementation.
          //

          //@cond

          protected:
          void
          parse (::xsd::cxx::xml::dom::parser< char >&,
                 ::xml_schema::flags);

          protected:
          Hematocrit_optional Hematocrit_;
          Hemoglobin_optional Hemoglobin_;
          PlateletCount_optional PlateletCount_;
          MeanCorpuscularHemoglobin_optional MeanCorpuscularHemoglobin_;
          MeanCorpuscularHemoglobinConcentration_optional MeanCorpuscularHemoglobinConcentration_;
          MeanCorpuscularVolume_optional MeanCorpuscularVolume_;
          RedBloodCellCount_optional RedBloodCellCount_;
          WhiteBloodCellCount_optional WhiteBloodCellCount_;

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
        operator<< (::std::ostream&, const CompleteBloodCountData&);
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
        operator<< (::xercesc::DOMElement&, const CompleteBloodCountData&);
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

#endif // COMPLETE_BLOOD_COUNT_DATA_HXX
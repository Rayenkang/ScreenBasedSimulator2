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
 * @brief Generated from Waveform.xsd.
 */

#ifndef WAVEFORM_HXX
#define WAVEFORM_HXX

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
        class Waveform;
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

namespace mil
{
  namespace tatrc
  {
    namespace physiology
    {
      namespace datamodel
      {
        class FunctionTimeVsElectricPotentialData;
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
        class ScalarTimeData;
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
        class enumHeartRhythm;
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
         * @brief Class corresponding to the %Waveform schema type.
         *
         * @nosubgrouping
         */
        class Waveform: public ::xml_schema::type
        {
          public:
          /**
           * @name Data
           *
           * @brief Accessor and modifier functions for the %Data
           * required element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::FunctionTimeVsElectricPotentialData Data_type;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< Data_type, char > Data_traits;

          /**
           * @brief Return a read-only (constant) reference to the element.
           *
           * @return A constant reference to the element.
           */
          const Data_type&
          Data () const;

          /**
           * @brief Return a read-write reference to the element.
           *
           * @return A reference to the element.
           */
          Data_type&
          Data ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          Data (const Data_type& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          Data (::std::unique_ptr< Data_type > p);

          //@}

          /**
           * @name TimeStep
           *
           * @brief Accessor and modifier functions for the %TimeStep
           * optional element.
           */
          //@{

          /**
           * @brief Element type.
           */
          typedef ::mil::tatrc::physiology::datamodel::ScalarTimeData TimeStep_type;

          /**
           * @brief Element optional container type.
           */
          typedef ::xsd::cxx::tree::optional< TimeStep_type > TimeStep_optional;

          /**
           * @brief Element traits type.
           */
          typedef ::xsd::cxx::tree::traits< TimeStep_type, char > TimeStep_traits;

          /**
           * @brief Return a read-only (constant) reference to the element
           * container.
           *
           * @return A constant reference to the optional container.
           */
          const TimeStep_optional&
          TimeStep () const;

          /**
           * @brief Return a read-write reference to the element container.
           *
           * @return A reference to the optional container.
           */
          TimeStep_optional&
          TimeStep ();

          /**
           * @brief Set the element value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the element.
           */
          void
          TimeStep (const TimeStep_type& x);

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
          TimeStep (const TimeStep_optional& x);

          /**
           * @brief Set the element value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly instead
           * of making a copy.
           */
          void
          TimeStep (::std::unique_ptr< TimeStep_type > p);

          //@}

          /**
           * @name Rhythm
           *
           * @brief Accessor and modifier functions for the %Rhythm
           * required attribute.
           */
          //@{

          /**
           * @brief Attribute type.
           */
          typedef ::mil::tatrc::physiology::datamodel::enumHeartRhythm Rhythm_type;

          /**
           * @brief Attribute traits type.
           */
          typedef ::xsd::cxx::tree::traits< Rhythm_type, char > Rhythm_traits;

          /**
           * @brief Return a read-only (constant) reference to the attribute.
           *
           * @return A constant reference to the attribute.
           */
          const Rhythm_type&
          Rhythm () const;

          /**
           * @brief Return a read-write reference to the attribute.
           *
           * @return A reference to the attribute.
           */
          Rhythm_type&
          Rhythm ();

          /**
           * @brief Set the attribute value.
           *
           * @param x A new value to set.
           *
           * This function makes a copy of its argument and sets it as
           * the new value of the attribute.
           */
          void
          Rhythm (const Rhythm_type& x);

          /**
           * @brief Set the attribute value without copying.
           *
           * @param p A new value to use.
           *
           * This function will try to use the passed value directly
           * instead of making a copy.
           */
          void
          Rhythm (::std::unique_ptr< Rhythm_type > p);

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
          Waveform ();

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes.
           */
          Waveform (const Data_type&,
                    const Rhythm_type&);

          /**
           * @brief Create an instance from the ultimate base and
           * initializers for required elements and attributes
           * (::std::unique_ptr version).
           *
           * This constructor will try to use the passed values directly
           * instead of making copies.
           */
          Waveform (::std::unique_ptr< Data_type >,
                    const Rhythm_type&);

          /**
           * @brief Create an instance from a DOM element.
           *
           * @param e A DOM element to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          Waveform (const ::xercesc::DOMElement& e,
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
          Waveform (const Waveform& x,
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
          virtual Waveform*
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
          Waveform&
          operator= (const Waveform& x);

          //@}

          /**
           * @brief Destructor.
           */
          virtual 
          ~Waveform ();

          // Implementation.
          //

          //@cond

          protected:
          void
          parse (::xsd::cxx::xml::dom::parser< char >&,
                 ::xml_schema::flags);

          protected:
          ::xsd::cxx::tree::one< Data_type > Data_;
          TimeStep_optional TimeStep_;
          ::xsd::cxx::tree::one< Rhythm_type > Rhythm_;

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
        operator<< (::std::ostream&, const Waveform&);
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
        operator<< (::xercesc::DOMElement&, const Waveform&);
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

#endif // WAVEFORM_HXX

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
 * @brief Generated from DoubleList.xsd.
 */

#ifndef DOUBLE_LIST_HXX
#define DOUBLE_LIST_HXX

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
        class DoubleList;
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
      /**
       * @brief C++ namespace for the %uri:/mil/tatrc/physiology/datamodel
       * schema namespace.
       */
      namespace datamodel
      {
        /**
         * @brief List class corresponding to the %DoubleList
         * schema type.
         *
         * This class has an interface of a standard C++ sequence (e.g.,
         * std::vector).
         */
        class __attribute__ ((visibility ("default"))) DoubleList: public ::xml_schema::simple_type,
          public ::xsd::cxx::tree::list< ::xml_schema::double_, char, ::xsd::cxx::tree::schema_type::double_ >
        {
          public:
          /**
           * @brief Default constructor.
           *
           * Creates an empty list.
           */
          DoubleList ();

          /**
           * @brief Create a list with copies of the specified element.
           *
           * @param n A number of elements to copy.
           * @param x An element to copy.
           *
           * This constructor creates a list with @a n copies of @a x.
           */
          DoubleList (size_type n, const ::xml_schema::double_& x);

          /**
           * @brief Create a list from an iterator range.
           *
           * @param begin An iterator pointing to the first element.
           * @param end An iterator pointing to the one past the last element.
           *
           * This constructor creates a list consisting of copies of the
           * elements in the range [begin,end).
           */
          template < typename I >
          DoubleList (const I& begin, const I& end)
          : ::xsd::cxx::tree::list< ::xml_schema::double_, char, ::xsd::cxx::tree::schema_type::double_ > (begin, end, this)
          {
          }

          /**
           * @brief Create an instance from a DOM element.
           *
           * @param e A DOM element to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          DoubleList (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

          /**
           * @brief Create an instance from a DOM attribute.
           *
           * @param a A DOM attribute to extract the data from.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          DoubleList (const ::xercesc::DOMAttr& a,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

          /**
           * @brief Create an instance from a string fragment.
           *
           * @param s A string fragment to extract the data from.
           * @param e A pointer to DOM element containing the string fragment.
           * @param f Flags to create the new instance with.
           * @param c A pointer to the object that will contain the new
           * instance.
           */
          DoubleList (const ::std::string& s,
                      const ::xercesc::DOMElement* e,
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
          DoubleList (const DoubleList& x,
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
          virtual DoubleList*
          _clone (::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0) const;

          /**
           * @brief Destructor.
           */
          virtual 
          ~DoubleList ();
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
        operator<< (::std::ostream&, const DoubleList&);
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
        operator<< (::xercesc::DOMElement&, const DoubleList&);

        __attribute__ ((visibility ("default")))
        void
        operator<< (::xercesc::DOMAttr&, const DoubleList&);

        __attribute__ ((visibility ("default")))
        void
        operator<< (::xml_schema::list_stream&,
                    const DoubleList&);
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

#endif // DOUBLE_LIST_HXX

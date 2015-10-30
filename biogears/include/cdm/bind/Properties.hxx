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
 * @brief Generated from Properties.xsd.
 */

#ifndef PROPERTIES_HXX
#define PROPERTIES_HXX

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

#include "PropertyData.hxx"

#include "ObjectData.hxx"

#include "DoubleList.hxx"

#include "enumSide.hxx"

#include "enumOpenClosed.hxx"

#include "enumOnOff.hxx"

#include "enumErrorType.hxx"

#include "ErrorData.hxx"

#include "ErrorList.hxx"

#include "ScalarData.hxx"

#include "DoubleFraction.hxx"

#include "ScalarFractionData.hxx"

#include "ScalarAmountData.hxx"

#include "ScalarAmountPerMassData.hxx"

#include "ScalarAmountPerTimeData.hxx"

#include "ScalarAmountPerVolumeData.hxx"

#include "ScalarAreaData.hxx"

#include "ScalarAreaPerTimePerPressureData.hxx"

#include "ScalarElectricCapacitanceData.hxx"

#include "ScalarElectricChargeData.hxx"

#include "ScalarElectricCurrentData.hxx"

#include "ScalarElectricPotentialData.hxx"

#include "ScalarElectricInductanceData.hxx"

#include "ScalarElectricResistanceData.hxx"

#include "ScalarEnergyData.hxx"

#include "ScalarEnergyPerAmountData.hxx"

#include "ScalarEnergyPerMassData.hxx"

#include "ScalarFlowResistanceData.hxx"

#include "ScalarFlowComplianceData.hxx"

#include "ScalarFlowElastanceData.hxx"

#include "ScalarFlowInertanceData.hxx"

#include "ScalarForceData.hxx"

#include "ScalarFrequencyData.hxx"

#include "ScalarHeatResistanceData.hxx"

#include "ScalarHeatResistanceAreaData.hxx"

#include "ScalarHeatCapacitanceData.hxx"

#include "ScalarHeatCapacitancePerMassData.hxx"

#include "ScalarHeatConductanceData.hxx"

#include "ScalarHeatConductancePerAreaData.hxx"

#include "ScalarHeatInductanceData.hxx"

#include "ScalarInversePressureData.hxx"

#include "ScalarLengthData.hxx"

#include "ScalarLengthPerTimeData.hxx"

#include "ScalarLengthPerTimePerPressureData.hxx"

#include "ScalarMassData.hxx"

#include "ScalarMassPerAmountData.hxx"

#include "ScalarMassPerVolumeData.hxx"

#include "ScalarMassPerMassData.hxx"

#include "ScalarMassPerTimeData.hxx"

#include "ScalarOsmolalityData.hxx"

#include "ScalarOsmolarityData.hxx"

#include "ScalarPowerData.hxx"

#include "ScalarPressureData.hxx"

#include "ScalarPressurePerVolumeData.hxx"

#include "ScalarTimeData.hxx"

#include "ScalarTemperatureData.hxx"

#include "ScalarVolumeData.hxx"

#include "ScalarVolumePerTimeData.hxx"

#include "ScalarVolumePerPressureData.hxx"

#include "ScalarVolumePerTimePerAreaData.hxx"

#include "ScalarVolumePerTimePerMassData.hxx"

#include "ScalarVolumePerTimePerPressureData.hxx"

#include "ScalarVolumePerTimePerPressurePerAreaData.hxx"

#include "ArrayData.hxx"

#include "FunctionData.hxx"

#include "FunctionTimeVsVolumeData.hxx"

#include "FunctionTimeVsElectricPotentialData.hxx"

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

#endif // PROPERTIES_HXX

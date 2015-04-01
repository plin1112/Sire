//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireVol_registrars.h"

#include "coordgroup.h"
#include "combinespaces.h"
#include "combinedspace.h"
#include "cartesian.h"
#include "grid.h"
#include "patching.h"
#include "aabox.h"
#include "periodicbox.h"

#include "Helpers/objectregistry.hpp"

void register_SireVol_objects()
{

    ObjectRegistry::registerConverterFor< SireVol::CoordGroup >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupEditor >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupArray >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupArrayArray >();
    ObjectRegistry::registerConverterFor< SireVol::CombineSpaces >();
    ObjectRegistry::registerConverterFor< SireVol::CombinedSpace >();
    ObjectRegistry::registerConverterFor< SireVol::Cartesian >();
    ObjectRegistry::registerConverterFor< SireVol::NullGrid >();
    ObjectRegistry::registerConverterFor< SireVol::RegularGrid >();
    ObjectRegistry::registerConverterFor< SireVol::NullPatching >();
    ObjectRegistry::registerConverterFor< SireVol::BoxPatching >();
    ObjectRegistry::registerConverterFor< SireVol::AABox >();
    ObjectRegistry::registerConverterFor< SireVol::PeriodicBox >();

}


//
// Created by Jost on 05/03/2025.
//

#include "geo_raster.h"
#include "gdal_version.h"

namespace georasters
{
    void GeoRaster::_bind_methods()
    {
    }

    GeoRaster::GeoRaster()
    {
        godot::UtilityFunctions::print_rich("Using GDAL ", GDAL_RELEASE_NAME);
    }

    GeoRaster::~GeoRaster() = default;

}
//
// Created by Jost on 07/03/2025.
//

#include "GeoRaster.h"

#include "gdal_version.h"
#include "gdal_priv.h" // GDAL C++ API

namespace godot::georasters
{
    void GeoRaster::_bind_methods()
    {
    }

    GeoRaster::GeoRaster()
    {
        UtilityFunctions::print_rich("Using GDAL ", GDAL_RELEASE_NAME);
        GDALAllRegister();

        const auto filepath = R"(./rasters/DigitalTerrainModel-0.5m.tif)";
        const auto pDataset =
            GDALDatasetUniquePtr(GDALDataset::FromHandle(GDALOpen(filepath, GA_ReadOnly)));

        if (!pDataset)
        {
            UtilityFunctions::push_error("Failed to open dataset!");
            return;
        }

        const auto size_x = pDataset->GetRasterXSize();
        const auto size_y = pDataset->GetRasterYSize();
        const auto band_count = pDataset->GetRasterCount();
        UtilityFunctions::print_rich("Opened dataset: dimensions: (", size_x, ", ", size_y,
                                     "), bands: ", band_count);
    }

    GeoRaster::~GeoRaster() = default;
}
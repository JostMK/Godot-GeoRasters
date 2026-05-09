//
// Created by Jost on 10/03/2025.
//

#include "GeoTiff.h"

#include "tinytiffreader.h"

#include <godot_cpp/variant/utility_functions.hpp>

namespace georasters
{
    GeoTiff GeoTiff::open(const std::string &filePath)
    {
        TinyTIFFReaderFile *p_tiff = nullptr;
        p_tiff = TinyTIFFReader_open(filePath.c_str());
        if (!p_tiff)
        {
            godot::UtilityFunctions::push_error(
                "ERROR reading (not existent, not accessible or no TIFF file)");

            TinyTIFFReader_close(p_tiff);
            return {};
        }

        const auto width = TinyTIFFReader_getWidth(p_tiff);
        const auto height = TinyTIFFReader_getHeight(p_tiff);
        //const auto bits = TinyTIFFReader_getBitsPerSample(p_tiff, 0);
        const auto frames = TinyTIFFReader_countFrames(p_tiff);
        const auto desc = TinyTIFFReader_getImageDescription(p_tiff);

        godot::UtilityFunctions::print("GeoTIFF: Size[", width, ", ", height, "], frames: ", frames);
        godot::UtilityFunctions::print("GeoTIFF: Desc: ", desc);

        TinyTIFFReader_close(p_tiff);

        return {};
    }
}

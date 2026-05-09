//
// Created by Jost on 10/03/2025.
//

#ifndef GEOTIFF_H
#define GEOTIFF_H
#include <string>
namespace georasters
{
    class GeoTiff
    {
    public:
        static GeoTiff open(const std::string &filePath);

    protected:
        GeoTiff() = default;
        ~GeoTiff() = default;
    };
}

#endif // GEOTIFF_H

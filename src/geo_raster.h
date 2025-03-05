//
// Created by Jost on 05/03/2025.
//

#ifndef GEO_RASTER_H
#define GEO_RASTER_H
#include <godot_cpp/classes/mesh_instance3d.hpp>

namespace georasters
{

    class GeoRaster : public godot::MeshInstance3D
    {
        GDCLASS(GeoRaster, MeshInstance3D)

    protected:
        static void _bind_methods();

    public:
        GeoRaster();
        ~GeoRaster() override;
    };

}

#endif // GEO_RASTER_H

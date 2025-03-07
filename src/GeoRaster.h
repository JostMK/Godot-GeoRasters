//
// Created by Jost on 07/03/2025.
//

#ifndef GEORASTER_H
#define GEORASTER_H

#include <godot_cpp/classes/mesh_instance3d.hpp>

namespace godot::georasters
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

#endif //GEORASTER_H

target_sources( ${PROJECT_NAME}
    PRIVATE
        gdexample.h
        gdexample.cpp
        geo_raster.h
        geo_raster.cpp
        register_types.cpp
)

target_include_directories( ${PROJECT_NAME}
    PRIVATE
        "src"
)

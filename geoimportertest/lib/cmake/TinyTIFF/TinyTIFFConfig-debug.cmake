#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "TinyTIFF::TinyTIFF" for configuration "Debug"
set_property(TARGET TinyTIFF::TinyTIFF APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TinyTIFF::TinyTIFF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/TinyTIFF_Debug.lib"
  )

list(APPEND _cmake_import_check_targets TinyTIFF::TinyTIFF )
list(APPEND _cmake_import_check_files_for_TinyTIFF::TinyTIFF "${_IMPORT_PREFIX}/lib/TinyTIFF_Debug.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

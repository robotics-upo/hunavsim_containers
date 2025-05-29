#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hunav_rviz2_panel::hunav_rviz2_panel" for configuration ""
set_property(TARGET hunav_rviz2_panel::hunav_rviz2_panel APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(hunav_rviz2_panel::hunav_rviz2_panel PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libhunav_rviz2_panel.so"
  IMPORTED_SONAME_NOCONFIG "libhunav_rviz2_panel.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hunav_rviz2_panel::hunav_rviz2_panel )
list(APPEND _IMPORT_CHECK_FILES_FOR_hunav_rviz2_panel::hunav_rviz2_panel "${_IMPORT_PREFIX}/lib/libhunav_rviz2_panel.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

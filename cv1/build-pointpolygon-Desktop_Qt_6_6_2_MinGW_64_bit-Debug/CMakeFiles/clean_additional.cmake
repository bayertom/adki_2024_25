# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\pointpolygon_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\pointpolygon_autogen.dir\\ParseCache.txt"
  "pointpolygon_autogen"
  )
endif()

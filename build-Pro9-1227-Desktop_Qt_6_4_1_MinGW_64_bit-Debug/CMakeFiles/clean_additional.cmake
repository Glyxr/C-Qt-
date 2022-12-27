# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro9-1227_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro9-1227_autogen.dir\\ParseCache.txt"
  "Pro9-1227_autogen"
  )
endif()

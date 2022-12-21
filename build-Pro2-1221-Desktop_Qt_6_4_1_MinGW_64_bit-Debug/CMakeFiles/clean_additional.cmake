# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro2-1221_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro2-1221_autogen.dir\\ParseCache.txt"
  "Pro2-1221_autogen"
  )
endif()

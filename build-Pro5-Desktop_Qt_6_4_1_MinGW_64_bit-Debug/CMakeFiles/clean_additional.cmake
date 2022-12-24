# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro5_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro5_autogen.dir\\ParseCache.txt"
  "Pro5_autogen"
  )
endif()

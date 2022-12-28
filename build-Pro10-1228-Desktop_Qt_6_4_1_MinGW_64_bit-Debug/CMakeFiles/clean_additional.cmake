# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro10-1228_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro10-1228_autogen.dir\\ParseCache.txt"
  "Pro10-1228_autogen"
  )
endif()

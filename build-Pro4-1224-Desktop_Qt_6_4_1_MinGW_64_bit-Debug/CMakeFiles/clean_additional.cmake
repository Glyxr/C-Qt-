# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro4-1224_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro4-1224_autogen.dir\\ParseCache.txt"
  "Pro4-1224_autogen"
  )
endif()

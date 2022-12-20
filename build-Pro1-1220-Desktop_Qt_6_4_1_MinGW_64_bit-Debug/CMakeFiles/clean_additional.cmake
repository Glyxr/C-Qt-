# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro1-1220_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro1-1220_autogen.dir\\ParseCache.txt"
  "Pro1-1220_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro-encapsulation-1228_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro-encapsulation-1228_autogen.dir\\ParseCache.txt"
  "Pro-encapsulation-1228_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SingalandSlot_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SingalandSlot_autogen.dir\\ParseCache.txt"
  "SingalandSlot_autogen"
  )
endif()

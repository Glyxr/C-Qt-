# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pro-1220-painterDe_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pro-1220-painterDe_autogen.dir\\ParseCache.txt"
  "Pro-1220-painterDe_autogen"
  )
endif()
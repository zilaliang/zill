# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Image_Detection_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Image_Detection_autogen.dir\\ParseCache.txt"
  "Image_Detection_autogen"
  )
endif()

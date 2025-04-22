# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SicaklikDonusturucu_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SicaklikDonusturucu_autogen.dir\\ParseCache.txt"
  "SicaklikDonusturucu_autogen"
  )
endif()

# CMake generated Testfile for 
# Source directory: /home/fly/fly/PX4-Autopilot/src/lib/system_identification
# Build directory: /home/fly/fly/build/px4/src/lib/system_identification
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(unit-arx_rls_test "/home/fly/fly/build/px4/unit-arx_rls_test")
set_tests_properties(unit-arx_rls_test PROPERTIES  WORKING_DIRECTORY "/home/fly/fly/build/px4" _BACKTRACE_TRIPLES "/home/fly/fly/PX4-Autopilot/cmake/gtest/px4_add_gtest.cmake;71;add_test;/home/fly/fly/PX4-Autopilot/src/lib/system_identification/CMakeLists.txt;40;px4_add_unit_gtest;/home/fly/fly/PX4-Autopilot/src/lib/system_identification/CMakeLists.txt;0;")
add_test(unit-system_identification_test "/home/fly/fly/build/px4/unit-system_identification_test")
set_tests_properties(unit-system_identification_test PROPERTIES  WORKING_DIRECTORY "/home/fly/fly/build/px4" _BACKTRACE_TRIPLES "/home/fly/fly/PX4-Autopilot/cmake/gtest/px4_add_gtest.cmake;71;add_test;/home/fly/fly/PX4-Autopilot/src/lib/system_identification/CMakeLists.txt;41;px4_add_unit_gtest;/home/fly/fly/PX4-Autopilot/src/lib/system_identification/CMakeLists.txt;0;")

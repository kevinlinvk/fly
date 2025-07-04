# CMake generated Testfile for 
# Source directory: /home/fly/fly/PX4-Autopilot/src/lib/collision_prevention
# Build directory: /home/fly/fly/build/px4/src/lib/collision_prevention
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(functional-CollisionPrevention "/home/fly/fly/build/px4/functional-CollisionPrevention")
set_tests_properties(functional-CollisionPrevention PROPERTIES  _BACKTRACE_TRIPLES "/home/fly/fly/PX4-Autopilot/cmake/gtest/px4_add_gtest.cmake;125;add_test;/home/fly/fly/PX4-Autopilot/src/lib/collision_prevention/CMakeLists.txt;42;px4_add_functional_gtest;/home/fly/fly/PX4-Autopilot/src/lib/collision_prevention/CMakeLists.txt;0;")
add_test(unit-ObstacleMath "/home/fly/fly/build/px4/unit-ObstacleMath")
set_tests_properties(unit-ObstacleMath PROPERTIES  WORKING_DIRECTORY "/home/fly/fly/build/px4" _BACKTRACE_TRIPLES "/home/fly/fly/PX4-Autopilot/cmake/gtest/px4_add_gtest.cmake;71;add_test;/home/fly/fly/PX4-Autopilot/src/lib/collision_prevention/CMakeLists.txt;43;px4_add_unit_gtest;/home/fly/fly/PX4-Autopilot/src/lib/collision_prevention/CMakeLists.txt;0;")

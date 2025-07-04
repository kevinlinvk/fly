# CMake generated Testfile for 
# Source directory: /home/fly/fly/PX4-Autopilot/src/lib/motion_planning
# Build directory: /home/fly/fly/build/px4/src/lib/motion_planning
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(unit-VelocitySmoothing "/home/fly/fly/build/px4/unit-VelocitySmoothing")
set_tests_properties(unit-VelocitySmoothing PROPERTIES  WORKING_DIRECTORY "/home/fly/fly/build/px4" _BACKTRACE_TRIPLES "/home/fly/fly/PX4-Autopilot/cmake/gtest/px4_add_gtest.cmake;71;add_test;/home/fly/fly/PX4-Autopilot/src/lib/motion_planning/CMakeLists.txt;44;px4_add_unit_gtest;/home/fly/fly/PX4-Autopilot/src/lib/motion_planning/CMakeLists.txt;0;")
add_test(unit-PositionSmoothing "/home/fly/fly/build/px4/unit-PositionSmoothing")
set_tests_properties(unit-PositionSmoothing PROPERTIES  WORKING_DIRECTORY "/home/fly/fly/build/px4" _BACKTRACE_TRIPLES "/home/fly/fly/PX4-Autopilot/cmake/gtest/px4_add_gtest.cmake;71;add_test;/home/fly/fly/PX4-Autopilot/src/lib/motion_planning/CMakeLists.txt;45;px4_add_unit_gtest;/home/fly/fly/PX4-Autopilot/src/lib/motion_planning/CMakeLists.txt;0;")
add_test(unit-HeadingSmoothing "/home/fly/fly/build/px4/unit-HeadingSmoothing")
set_tests_properties(unit-HeadingSmoothing PROPERTIES  WORKING_DIRECTORY "/home/fly/fly/build/px4" _BACKTRACE_TRIPLES "/home/fly/fly/PX4-Autopilot/cmake/gtest/px4_add_gtest.cmake;71;add_test;/home/fly/fly/PX4-Autopilot/src/lib/motion_planning/CMakeLists.txt;46;px4_add_unit_gtest;/home/fly/fly/PX4-Autopilot/src/lib/motion_planning/CMakeLists.txt;0;")

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fly/fly/PX4-Autopilot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fly/fly/build/px4

# Include any dependencies generated for this target.
include src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/compiler_depend.make

# Include the progress variables for this target.
include src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/flags.make

src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o: src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/flags.make
src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o: /home/fly/fly/PX4-Autopilot/src/lib/adsb/AdsbConflictTest.cpp
src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o: src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o"
	cd /home/fly/fly/build/px4/src/lib/adsb && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o -MF CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o.d -o CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o -c /home/fly/fly/PX4-Autopilot/src/lib/adsb/AdsbConflictTest.cpp

src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.i"
	cd /home/fly/fly/build/px4/src/lib/adsb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fly/fly/PX4-Autopilot/src/lib/adsb/AdsbConflictTest.cpp > CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.i

src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.s"
	cd /home/fly/fly/build/px4/src/lib/adsb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fly/fly/PX4-Autopilot/src/lib/adsb/AdsbConflictTest.cpp -o CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.s

# Object files for target functional-AdsbConflict
functional__AdsbConflict_OBJECTS = \
"CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o"

# External object files for target functional-AdsbConflict
functional__AdsbConflict_EXTERNAL_OBJECTS =

functional-AdsbConflict: src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/AdsbConflictTest.cpp.o
functional-AdsbConflict: src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/build.make
functional-AdsbConflict: src/lib/adsb/libadsb.a
functional-AdsbConflict: platforms/ros2/src/px4/common/libpx4_layer.a
functional-AdsbConflict: platforms/common/libpx4_platform.a
functional-AdsbConflict: platforms/common/uORB/libuORB.a
functional-AdsbConflict: src/lib/systemlib/libsystemlib.a
functional-AdsbConflict: src/lib/cdev/libcdev.a
functional-AdsbConflict: platforms/common/px4_work_queue/libpx4_work_queue.a
functional-AdsbConflict: platforms/common/work_queue/libwork_queue.a
functional-AdsbConflict: src/lib/parameters/libparameters.a
functional-AdsbConflict: src/lib/events/libevents.a
functional-AdsbConflict: src/lib/perf/libperf.a
functional-AdsbConflict: src/lib/tinybson/libtinybson.a
functional-AdsbConflict: msg/libuorb_msgs.a
functional-AdsbConflict: src/lib/geo/libgeo.a
functional-AdsbConflict: src/lib/heatshrink/libheatshrink.a
functional-AdsbConflict: platforms/common/libpx4_platform.a
functional-AdsbConflict: platforms/common/px4_work_queue/libpx4_work_queue.a
functional-AdsbConflict: src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../functional-AdsbConflict"
	cd /home/fly/fly/build/px4/src/lib/adsb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/functional-AdsbConflict.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/build: functional-AdsbConflict
.PHONY : src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/build

src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/clean:
	cd /home/fly/fly/build/px4/src/lib/adsb && $(CMAKE_COMMAND) -P CMakeFiles/functional-AdsbConflict.dir/cmake_clean.cmake
.PHONY : src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/clean

src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/depend:
	cd /home/fly/fly/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fly/fly/PX4-Autopilot /home/fly/fly/PX4-Autopilot/src/lib/adsb /home/fly/fly/build/px4 /home/fly/fly/build/px4/src/lib/adsb /home/fly/fly/build/px4/src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/lib/adsb/CMakeFiles/functional-AdsbConflict.dir/depend


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
include src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/compiler_depend.make

# Include the progress variables for this target.
include src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/flags.make

src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o: src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/flags.make
src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o: /home/fly/fly/PX4-Autopilot/src/lib/rover_control/RoverControlTest.cpp
src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o: src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o"
	cd /home/fly/fly/build/px4/src/lib/rover_control && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o -MF CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o.d -o CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o -c /home/fly/fly/PX4-Autopilot/src/lib/rover_control/RoverControlTest.cpp

src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.i"
	cd /home/fly/fly/build/px4/src/lib/rover_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fly/fly/PX4-Autopilot/src/lib/rover_control/RoverControlTest.cpp > CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.i

src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.s"
	cd /home/fly/fly/build/px4/src/lib/rover_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fly/fly/PX4-Autopilot/src/lib/rover_control/RoverControlTest.cpp -o CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.s

# Object files for target unit-RoverControl
unit__RoverControl_OBJECTS = \
"CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o"

# External object files for target unit-RoverControl
unit__RoverControl_EXTERNAL_OBJECTS =

unit-RoverControl: src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/RoverControlTest.cpp.o
unit-RoverControl: src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/build.make
unit-RoverControl: src/lib/rover_control/librover_control.a
unit-RoverControl: lib/libgtest_main.a
unit-RoverControl: src/lib/pid/libPID.a
unit-RoverControl: src/lib/geo/libgeo.a
unit-RoverControl: lib/libgtest.a
unit-RoverControl: src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../unit-RoverControl"
	cd /home/fly/fly/build/px4/src/lib/rover_control && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit-RoverControl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/build: unit-RoverControl
.PHONY : src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/build

src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/clean:
	cd /home/fly/fly/build/px4/src/lib/rover_control && $(CMAKE_COMMAND) -P CMakeFiles/unit-RoverControl.dir/cmake_clean.cmake
.PHONY : src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/clean

src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/depend:
	cd /home/fly/fly/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fly/fly/PX4-Autopilot /home/fly/fly/PX4-Autopilot/src/lib/rover_control /home/fly/fly/build/px4 /home/fly/fly/build/px4/src/lib/rover_control /home/fly/fly/build/px4/src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/lib/rover_control/CMakeFiles/unit-RoverControl.dir/depend


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
include platforms/common/CMakeFiles/unit-board_identity_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include platforms/common/CMakeFiles/unit-board_identity_test.dir/compiler_depend.make

# Include the progress variables for this target.
include platforms/common/CMakeFiles/unit-board_identity_test.dir/progress.make

# Include the compile flags for this target's objects.
include platforms/common/CMakeFiles/unit-board_identity_test.dir/flags.make

platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o: platforms/common/CMakeFiles/unit-board_identity_test.dir/flags.make
platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o: /home/fly/fly/PX4-Autopilot/platforms/common/board_identity_test.cpp
platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o: platforms/common/CMakeFiles/unit-board_identity_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o"
	cd /home/fly/fly/build/px4/platforms/common && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o -MF CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o.d -o CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o -c /home/fly/fly/PX4-Autopilot/platforms/common/board_identity_test.cpp

platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.i"
	cd /home/fly/fly/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fly/fly/PX4-Autopilot/platforms/common/board_identity_test.cpp > CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.i

platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.s"
	cd /home/fly/fly/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fly/fly/PX4-Autopilot/platforms/common/board_identity_test.cpp -o CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.s

# Object files for target unit-board_identity_test
unit__board_identity_test_OBJECTS = \
"CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o"

# External object files for target unit-board_identity_test
unit__board_identity_test_EXTERNAL_OBJECTS =

unit-board_identity_test: platforms/common/CMakeFiles/unit-board_identity_test.dir/board_identity_test.cpp.o
unit-board_identity_test: platforms/common/CMakeFiles/unit-board_identity_test.dir/build.make
unit-board_identity_test: platforms/common/libpx4_platform.a
unit-board_identity_test: lib/libgtest_main.a
unit-board_identity_test: platforms/common/px4_work_queue/libpx4_work_queue.a
unit-board_identity_test: lib/libgtest.a
unit-board_identity_test: platforms/common/CMakeFiles/unit-board_identity_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../unit-board_identity_test"
	cd /home/fly/fly/build/px4/platforms/common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit-board_identity_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
platforms/common/CMakeFiles/unit-board_identity_test.dir/build: unit-board_identity_test
.PHONY : platforms/common/CMakeFiles/unit-board_identity_test.dir/build

platforms/common/CMakeFiles/unit-board_identity_test.dir/clean:
	cd /home/fly/fly/build/px4/platforms/common && $(CMAKE_COMMAND) -P CMakeFiles/unit-board_identity_test.dir/cmake_clean.cmake
.PHONY : platforms/common/CMakeFiles/unit-board_identity_test.dir/clean

platforms/common/CMakeFiles/unit-board_identity_test.dir/depend:
	cd /home/fly/fly/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fly/fly/PX4-Autopilot /home/fly/fly/PX4-Autopilot/platforms/common /home/fly/fly/build/px4 /home/fly/fly/build/px4/platforms/common /home/fly/fly/build/px4/platforms/common/CMakeFiles/unit-board_identity_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : platforms/common/CMakeFiles/unit-board_identity_test.dir/depend


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
include src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/compiler_depend.make

# Include the progress variables for this target.
include src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/flags.make

src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o: src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/flags.make
src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o: /home/fly/fly/PX4-Autopilot/src/lib/mathlib/math/test/NotchFilterTest.cpp
src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o: src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o"
	cd /home/fly/fly/build/px4/src/lib/mathlib && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o -MF CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o.d -o CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o -c /home/fly/fly/PX4-Autopilot/src/lib/mathlib/math/test/NotchFilterTest.cpp

src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.i"
	cd /home/fly/fly/build/px4/src/lib/mathlib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fly/fly/PX4-Autopilot/src/lib/mathlib/math/test/NotchFilterTest.cpp > CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.i

src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.s"
	cd /home/fly/fly/build/px4/src/lib/mathlib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fly/fly/PX4-Autopilot/src/lib/mathlib/math/test/NotchFilterTest.cpp -o CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.s

# Object files for target unit-NotchFilter
unit__NotchFilter_OBJECTS = \
"CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o"

# External object files for target unit-NotchFilter
unit__NotchFilter_EXTERNAL_OBJECTS =

unit-NotchFilter: src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/math/test/NotchFilterTest.cpp.o
unit-NotchFilter: src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/build.make
unit-NotchFilter: lib/libgtest_main.a
unit-NotchFilter: lib/libgtest.a
unit-NotchFilter: src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../unit-NotchFilter"
	cd /home/fly/fly/build/px4/src/lib/mathlib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit-NotchFilter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/build: unit-NotchFilter
.PHONY : src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/build

src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/clean:
	cd /home/fly/fly/build/px4/src/lib/mathlib && $(CMAKE_COMMAND) -P CMakeFiles/unit-NotchFilter.dir/cmake_clean.cmake
.PHONY : src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/clean

src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/depend:
	cd /home/fly/fly/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fly/fly/PX4-Autopilot /home/fly/fly/PX4-Autopilot/src/lib/mathlib /home/fly/fly/build/px4 /home/fly/fly/build/px4/src/lib/mathlib /home/fly/fly/build/px4/src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/lib/mathlib/CMakeFiles/unit-NotchFilter.dir/depend


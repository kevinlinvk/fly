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
include src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/compiler_depend.make

# Include the progress variables for this target.
include src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/flags.make

src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o: src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/flags.make
src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o: /home/fly/fly/PX4-Autopilot/src/lib/matrix/test/MatrixLeastSquaresTest.cpp
src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o: src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o"
	cd /home/fly/fly/build/px4/src/lib/matrix/test && /usr/bin/ccache /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o -MF CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o.d -o CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o -c /home/fly/fly/PX4-Autopilot/src/lib/matrix/test/MatrixLeastSquaresTest.cpp

src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.i"
	cd /home/fly/fly/build/px4/src/lib/matrix/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fly/fly/PX4-Autopilot/src/lib/matrix/test/MatrixLeastSquaresTest.cpp > CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.i

src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.s"
	cd /home/fly/fly/build/px4/src/lib/matrix/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fly/fly/PX4-Autopilot/src/lib/matrix/test/MatrixLeastSquaresTest.cpp -o CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.s

# Object files for target unit-MatrixLeastSquares
unit__MatrixLeastSquares_OBJECTS = \
"CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o"

# External object files for target unit-MatrixLeastSquares
unit__MatrixLeastSquares_EXTERNAL_OBJECTS =

unit-MatrixLeastSquares: src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/MatrixLeastSquaresTest.cpp.o
unit-MatrixLeastSquares: src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/build.make
unit-MatrixLeastSquares: lib/libgtest_main.a
unit-MatrixLeastSquares: lib/libgtest.a
unit-MatrixLeastSquares: src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fly/fly/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../unit-MatrixLeastSquares"
	cd /home/fly/fly/build/px4/src/lib/matrix/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit-MatrixLeastSquares.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/build: unit-MatrixLeastSquares
.PHONY : src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/build

src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/clean:
	cd /home/fly/fly/build/px4/src/lib/matrix/test && $(CMAKE_COMMAND) -P CMakeFiles/unit-MatrixLeastSquares.dir/cmake_clean.cmake
.PHONY : src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/clean

src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/depend:
	cd /home/fly/fly/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fly/fly/PX4-Autopilot /home/fly/fly/PX4-Autopilot/src/lib/matrix/test /home/fly/fly/build/px4 /home/fly/fly/build/px4/src/lib/matrix/test /home/fly/fly/build/px4/src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/lib/matrix/test/CMakeFiles/unit-MatrixLeastSquares.dir/depend


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

# Utility rule file for boardguiconfig.

# Include any custom commands dependencies for this target.
include CMakeFiles/boardguiconfig.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/boardguiconfig.dir/progress.make

CMakeFiles/boardguiconfig:
	cd /home/fly/fly/PX4-Autopilot && /usr/bin/cmake -E env PYTHON_EXECUTABLE=/usr/bin/python3 KCONFIG_CONFIG=/home/fly/fly/build/px4/boardconfig PLATFORM=ros2 VENDOR=px4 MODEL=ros2 LABEL=default TOOLCHAIN= ARCHITECTURE= ROMFSROOT=px4fmu_common BASE_DEFCONFIG=/home/fly/fly/build/px4/boardconfig /usr/bin/python3 -m guiconfig Kconfig
	cd /home/fly/fly/PX4-Autopilot && /usr/bin/cmake -E env PYTHON_EXECUTABLE=/usr/bin/python3 KCONFIG_CONFIG=/home/fly/fly/build/px4/boardconfig PLATFORM=ros2 VENDOR=px4 MODEL=ros2 LABEL=default TOOLCHAIN= ARCHITECTURE= ROMFSROOT=px4fmu_common BASE_DEFCONFIG=/home/fly/fly/build/px4/boardconfig /usr/bin/python3 -m savedefconfig
	cd /home/fly/fly/PX4-Autopilot && /usr/bin/cmake -E copy defconfig /home/fly/fly/PX4-Autopilot/boards/px4/ros2/default.px4board
	cd /home/fly/fly/PX4-Autopilot && /usr/bin/cmake -E remove defconfig
	cd /home/fly/fly/PX4-Autopilot && /usr/bin/cmake -E remove /home/fly/fly/build/px4/NuttX/apps_copy.stamp

boardguiconfig: CMakeFiles/boardguiconfig
boardguiconfig: CMakeFiles/boardguiconfig.dir/build.make
.PHONY : boardguiconfig

# Rule to build all files generated by this target.
CMakeFiles/boardguiconfig.dir/build: boardguiconfig
.PHONY : CMakeFiles/boardguiconfig.dir/build

CMakeFiles/boardguiconfig.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boardguiconfig.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boardguiconfig.dir/clean

CMakeFiles/boardguiconfig.dir/depend:
	cd /home/fly/fly/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fly/fly/PX4-Autopilot /home/fly/fly/PX4-Autopilot /home/fly/fly/build/px4 /home/fly/fly/build/px4 /home/fly/fly/build/px4/CMakeFiles/boardguiconfig.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/boardguiconfig.dir/depend


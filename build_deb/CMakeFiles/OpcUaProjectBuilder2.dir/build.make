# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/huebl/devel_/OpcUaStack/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huebl/devel_/OpcUaStack/build_deb

# Include any dependencies generated for this target.
include CMakeFiles/OpcUaProjectBuilder2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpcUaProjectBuilder2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpcUaProjectBuilder2.dir/flags.make

CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o: CMakeFiles/OpcUaProjectBuilder2.dir/flags.make
CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o: /home/huebl/devel_/OpcUaStack/src/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huebl/devel_/OpcUaStack/build_deb/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o -c /home/huebl/devel_/OpcUaStack/src/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp

CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huebl/devel_/OpcUaStack/src/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp > CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.i

CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huebl/devel_/OpcUaStack/src/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp -o CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.s

CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.requires:

.PHONY : CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.requires

CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.provides: CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.requires
	$(MAKE) -f CMakeFiles/OpcUaProjectBuilder2.dir/build.make CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.provides.build
.PHONY : CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.provides

CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.provides.build: CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o


# Object files for target OpcUaProjectBuilder2
OpcUaProjectBuilder2_OBJECTS = \
"CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o"

# External object files for target OpcUaProjectBuilder2
OpcUaProjectBuilder2_EXTERNAL_OBJECTS =

OpcUaProjectBuilder2: CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o
OpcUaProjectBuilder2: CMakeFiles/OpcUaProjectBuilder2.dir/build.make
OpcUaProjectBuilder2: /usr/lib/x86_64-linux-gnu/libboost_system.so
OpcUaProjectBuilder2: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so
OpcUaProjectBuilder2: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
OpcUaProjectBuilder2: /usr/lib/x86_64-linux-gnu/libboost_thread.so
OpcUaProjectBuilder2: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
OpcUaProjectBuilder2: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
OpcUaProjectBuilder2: /usr/lib/x86_64-linux-gnu/libboost_regex.so
OpcUaProjectBuilder2: CMakeFiles/OpcUaProjectBuilder2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huebl/devel_/OpcUaStack/build_deb/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OpcUaProjectBuilder2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpcUaProjectBuilder2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpcUaProjectBuilder2.dir/build: OpcUaProjectBuilder2

.PHONY : CMakeFiles/OpcUaProjectBuilder2.dir/build

CMakeFiles/OpcUaProjectBuilder2.dir/requires: CMakeFiles/OpcUaProjectBuilder2.dir/OpcUaProjectBuilder/OpcUaprojectBuilder.cpp.o.requires

.PHONY : CMakeFiles/OpcUaProjectBuilder2.dir/requires

CMakeFiles/OpcUaProjectBuilder2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpcUaProjectBuilder2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpcUaProjectBuilder2.dir/clean

CMakeFiles/OpcUaProjectBuilder2.dir/depend:
	cd /home/huebl/devel_/OpcUaStack/build_deb && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huebl/devel_/OpcUaStack/src /home/huebl/devel_/OpcUaStack/src /home/huebl/devel_/OpcUaStack/build_deb /home/huebl/devel_/OpcUaStack/build_deb /home/huebl/devel_/OpcUaStack/build_deb/CMakeFiles/OpcUaProjectBuilder2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpcUaProjectBuilder2.dir/depend

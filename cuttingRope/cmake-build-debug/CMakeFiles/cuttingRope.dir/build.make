# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /home/560204/soft/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/560204/soft/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/560204/gitee/LearnNote/cpp/offer/cuttingRope

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cuttingRope.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cuttingRope.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cuttingRope.dir/flags.make

CMakeFiles/cuttingRope.dir/main.cpp.o: CMakeFiles/cuttingRope.dir/flags.make
CMakeFiles/cuttingRope.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/560204/gitee/LearnNote/cpp/offer/cuttingRope/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cuttingRope.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cuttingRope.dir/main.cpp.o -c /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/main.cpp

CMakeFiles/cuttingRope.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cuttingRope.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/main.cpp > CMakeFiles/cuttingRope.dir/main.cpp.i

CMakeFiles/cuttingRope.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cuttingRope.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/main.cpp -o CMakeFiles/cuttingRope.dir/main.cpp.s

# Object files for target cuttingRope
cuttingRope_OBJECTS = \
"CMakeFiles/cuttingRope.dir/main.cpp.o"

# External object files for target cuttingRope
cuttingRope_EXTERNAL_OBJECTS =

cuttingRope: CMakeFiles/cuttingRope.dir/main.cpp.o
cuttingRope: CMakeFiles/cuttingRope.dir/build.make
cuttingRope: CMakeFiles/cuttingRope.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/560204/gitee/LearnNote/cpp/offer/cuttingRope/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cuttingRope"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cuttingRope.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cuttingRope.dir/build: cuttingRope

.PHONY : CMakeFiles/cuttingRope.dir/build

CMakeFiles/cuttingRope.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cuttingRope.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cuttingRope.dir/clean

CMakeFiles/cuttingRope.dir/depend:
	cd /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/560204/gitee/LearnNote/cpp/offer/cuttingRope /home/560204/gitee/LearnNote/cpp/offer/cuttingRope /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/cmake-build-debug /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/cmake-build-debug /home/560204/gitee/LearnNote/cpp/offer/cuttingRope/cmake-build-debug/CMakeFiles/cuttingRope.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cuttingRope.dir/depend

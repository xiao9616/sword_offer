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
CMAKE_SOURCE_DIR = /home/560204/gitee/LearnNote/cpp/offer/subStructInTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/subStructInTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/subStructInTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/subStructInTree.dir/flags.make

CMakeFiles/subStructInTree.dir/main.cpp.o: CMakeFiles/subStructInTree.dir/flags.make
CMakeFiles/subStructInTree.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/560204/gitee/LearnNote/cpp/offer/subStructInTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/subStructInTree.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/subStructInTree.dir/main.cpp.o -c /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/main.cpp

CMakeFiles/subStructInTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/subStructInTree.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/main.cpp > CMakeFiles/subStructInTree.dir/main.cpp.i

CMakeFiles/subStructInTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/subStructInTree.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/main.cpp -o CMakeFiles/subStructInTree.dir/main.cpp.s

# Object files for target subStructInTree
subStructInTree_OBJECTS = \
"CMakeFiles/subStructInTree.dir/main.cpp.o"

# External object files for target subStructInTree
subStructInTree_EXTERNAL_OBJECTS =

subStructInTree: CMakeFiles/subStructInTree.dir/main.cpp.o
subStructInTree: CMakeFiles/subStructInTree.dir/build.make
subStructInTree: CMakeFiles/subStructInTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/560204/gitee/LearnNote/cpp/offer/subStructInTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable subStructInTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/subStructInTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/subStructInTree.dir/build: subStructInTree

.PHONY : CMakeFiles/subStructInTree.dir/build

CMakeFiles/subStructInTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/subStructInTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/subStructInTree.dir/clean

CMakeFiles/subStructInTree.dir/depend:
	cd /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/560204/gitee/LearnNote/cpp/offer/subStructInTree /home/560204/gitee/LearnNote/cpp/offer/subStructInTree /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/cmake-build-debug /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/cmake-build-debug /home/560204/gitee/LearnNote/cpp/offer/subStructInTree/cmake-build-debug/CMakeFiles/subStructInTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/subStructInTree.dir/depend


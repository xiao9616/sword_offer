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
CMAKE_SOURCE_DIR = /home/560204/gitee/LearnNote/cpp/offer/minStack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/minStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minStack.dir/flags.make

CMakeFiles/minStack.dir/main.cpp.o: CMakeFiles/minStack.dir/flags.make
CMakeFiles/minStack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/minStack.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/minStack.dir/main.cpp.o -c /home/560204/gitee/LearnNote/cpp/offer/minStack/main.cpp

CMakeFiles/minStack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minStack.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/560204/gitee/LearnNote/cpp/offer/minStack/main.cpp > CMakeFiles/minStack.dir/main.cpp.i

CMakeFiles/minStack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minStack.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/560204/gitee/LearnNote/cpp/offer/minStack/main.cpp -o CMakeFiles/minStack.dir/main.cpp.s

CMakeFiles/minStack.dir/StackMin.cpp.o: CMakeFiles/minStack.dir/flags.make
CMakeFiles/minStack.dir/StackMin.cpp.o: ../StackMin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/minStack.dir/StackMin.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/minStack.dir/StackMin.cpp.o -c /home/560204/gitee/LearnNote/cpp/offer/minStack/StackMin.cpp

CMakeFiles/minStack.dir/StackMin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minStack.dir/StackMin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/560204/gitee/LearnNote/cpp/offer/minStack/StackMin.cpp > CMakeFiles/minStack.dir/StackMin.cpp.i

CMakeFiles/minStack.dir/StackMin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minStack.dir/StackMin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/560204/gitee/LearnNote/cpp/offer/minStack/StackMin.cpp -o CMakeFiles/minStack.dir/StackMin.cpp.s

# Object files for target minStack
minStack_OBJECTS = \
"CMakeFiles/minStack.dir/main.cpp.o" \
"CMakeFiles/minStack.dir/StackMin.cpp.o"

# External object files for target minStack
minStack_EXTERNAL_OBJECTS =

minStack: CMakeFiles/minStack.dir/main.cpp.o
minStack: CMakeFiles/minStack.dir/StackMin.cpp.o
minStack: CMakeFiles/minStack.dir/build.make
minStack: CMakeFiles/minStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable minStack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minStack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minStack.dir/build: minStack

.PHONY : CMakeFiles/minStack.dir/build

CMakeFiles/minStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minStack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minStack.dir/clean

CMakeFiles/minStack.dir/depend:
	cd /home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/560204/gitee/LearnNote/cpp/offer/minStack /home/560204/gitee/LearnNote/cpp/offer/minStack /home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug /home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug /home/560204/gitee/LearnNote/cpp/offer/minStack/cmake-build-debug/CMakeFiles/minStack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minStack.dir/depend

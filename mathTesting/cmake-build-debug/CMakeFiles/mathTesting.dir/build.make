# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chris/CLionProjects/CS165/mathTesting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chris/CLionProjects/CS165/mathTesting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mathTesting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mathTesting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mathTesting.dir/flags.make

CMakeFiles/mathTesting.dir/main.cpp.o: CMakeFiles/mathTesting.dir/flags.make
CMakeFiles/mathTesting.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chris/CLionProjects/CS165/mathTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mathTesting.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mathTesting.dir/main.cpp.o -c /Users/chris/CLionProjects/CS165/mathTesting/main.cpp

CMakeFiles/mathTesting.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mathTesting.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chris/CLionProjects/CS165/mathTesting/main.cpp > CMakeFiles/mathTesting.dir/main.cpp.i

CMakeFiles/mathTesting.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mathTesting.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chris/CLionProjects/CS165/mathTesting/main.cpp -o CMakeFiles/mathTesting.dir/main.cpp.s

CMakeFiles/mathTesting.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/mathTesting.dir/main.cpp.o.requires

CMakeFiles/mathTesting.dir/main.cpp.o.provides: CMakeFiles/mathTesting.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/mathTesting.dir/build.make CMakeFiles/mathTesting.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/mathTesting.dir/main.cpp.o.provides

CMakeFiles/mathTesting.dir/main.cpp.o.provides.build: CMakeFiles/mathTesting.dir/main.cpp.o


# Object files for target mathTesting
mathTesting_OBJECTS = \
"CMakeFiles/mathTesting.dir/main.cpp.o"

# External object files for target mathTesting
mathTesting_EXTERNAL_OBJECTS =

mathTesting: CMakeFiles/mathTesting.dir/main.cpp.o
mathTesting: CMakeFiles/mathTesting.dir/build.make
mathTesting: CMakeFiles/mathTesting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chris/CLionProjects/CS165/mathTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mathTesting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mathTesting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mathTesting.dir/build: mathTesting

.PHONY : CMakeFiles/mathTesting.dir/build

CMakeFiles/mathTesting.dir/requires: CMakeFiles/mathTesting.dir/main.cpp.o.requires

.PHONY : CMakeFiles/mathTesting.dir/requires

CMakeFiles/mathTesting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mathTesting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mathTesting.dir/clean

CMakeFiles/mathTesting.dir/depend:
	cd /Users/chris/CLionProjects/CS165/mathTesting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chris/CLionProjects/CS165/mathTesting /Users/chris/CLionProjects/CS165/mathTesting /Users/chris/CLionProjects/CS165/mathTesting/cmake-build-debug /Users/chris/CLionProjects/CS165/mathTesting/cmake-build-debug /Users/chris/CLionProjects/CS165/mathTesting/cmake-build-debug/CMakeFiles/mathTesting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mathTesting.dir/depend


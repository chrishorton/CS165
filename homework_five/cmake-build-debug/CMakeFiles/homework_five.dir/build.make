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
CMAKE_SOURCE_DIR = /Users/chris/CLionProjects/CS165/homework_five

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chris/CLionProjects/CS165/homework_five/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/homework_five.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework_five.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework_five.dir/flags.make

CMakeFiles/homework_five.dir/main.cpp.o: CMakeFiles/homework_five.dir/flags.make
CMakeFiles/homework_five.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chris/CLionProjects/CS165/homework_five/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework_five.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_five.dir/main.cpp.o -c /Users/chris/CLionProjects/CS165/homework_five/main.cpp

CMakeFiles/homework_five.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_five.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chris/CLionProjects/CS165/homework_five/main.cpp > CMakeFiles/homework_five.dir/main.cpp.i

CMakeFiles/homework_five.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_five.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chris/CLionProjects/CS165/homework_five/main.cpp -o CMakeFiles/homework_five.dir/main.cpp.s

CMakeFiles/homework_five.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/homework_five.dir/main.cpp.o.requires

CMakeFiles/homework_five.dir/main.cpp.o.provides: CMakeFiles/homework_five.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/homework_five.dir/build.make CMakeFiles/homework_five.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/homework_five.dir/main.cpp.o.provides

CMakeFiles/homework_five.dir/main.cpp.o.provides.build: CMakeFiles/homework_five.dir/main.cpp.o


# Object files for target homework_five
homework_five_OBJECTS = \
"CMakeFiles/homework_five.dir/main.cpp.o"

# External object files for target homework_five
homework_five_EXTERNAL_OBJECTS =

homework_five: CMakeFiles/homework_five.dir/main.cpp.o
homework_five: CMakeFiles/homework_five.dir/build.make
homework_five: CMakeFiles/homework_five.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chris/CLionProjects/CS165/homework_five/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable homework_five"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework_five.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework_five.dir/build: homework_five

.PHONY : CMakeFiles/homework_five.dir/build

CMakeFiles/homework_five.dir/requires: CMakeFiles/homework_five.dir/main.cpp.o.requires

.PHONY : CMakeFiles/homework_five.dir/requires

CMakeFiles/homework_five.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/homework_five.dir/cmake_clean.cmake
.PHONY : CMakeFiles/homework_five.dir/clean

CMakeFiles/homework_five.dir/depend:
	cd /Users/chris/CLionProjects/CS165/homework_five/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chris/CLionProjects/CS165/homework_five /Users/chris/CLionProjects/CS165/homework_five /Users/chris/CLionProjects/CS165/homework_five/cmake-build-debug /Users/chris/CLionProjects/CS165/homework_five/cmake-build-debug /Users/chris/CLionProjects/CS165/homework_five/cmake-build-debug/CMakeFiles/homework_five.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homework_five.dir/depend


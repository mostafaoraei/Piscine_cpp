# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex08.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex08.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex08.dir/flags.make

CMakeFiles/ex08.dir/main.cpp.o: CMakeFiles/ex08.dir/flags.make
CMakeFiles/ex08.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex08.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex08.dir/main.cpp.o -c /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/main.cpp

CMakeFiles/ex08.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex08.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/main.cpp > CMakeFiles/ex08.dir/main.cpp.i

CMakeFiles/ex08.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex08.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/main.cpp -o CMakeFiles/ex08.dir/main.cpp.s

CMakeFiles/ex08.dir/Human.cpp.o: CMakeFiles/ex08.dir/flags.make
CMakeFiles/ex08.dir/Human.cpp.o: ../Human.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex08.dir/Human.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex08.dir/Human.cpp.o -c /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/Human.cpp

CMakeFiles/ex08.dir/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex08.dir/Human.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/Human.cpp > CMakeFiles/ex08.dir/Human.cpp.i

CMakeFiles/ex08.dir/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex08.dir/Human.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/Human.cpp -o CMakeFiles/ex08.dir/Human.cpp.s

# Object files for target ex08
ex08_OBJECTS = \
"CMakeFiles/ex08.dir/main.cpp.o" \
"CMakeFiles/ex08.dir/Human.cpp.o"

# External object files for target ex08
ex08_EXTERNAL_OBJECTS =

ex08: CMakeFiles/ex08.dir/main.cpp.o
ex08: CMakeFiles/ex08.dir/Human.cpp.o
ex08: CMakeFiles/ex08.dir/build.make
ex08: CMakeFiles/ex08.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex08"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex08.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex08.dir/build: ex08

.PHONY : CMakeFiles/ex08.dir/build

CMakeFiles/ex08.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex08.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex08.dir/clean

CMakeFiles/ex08.dir/depend:
	cd /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08 /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08 /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug /Users/mostafaoraei/Desktop/cpp/D1/ex08/ex08/cmake-build-debug/CMakeFiles/ex08.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex08.dir/depend


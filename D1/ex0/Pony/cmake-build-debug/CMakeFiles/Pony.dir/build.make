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
CMAKE_SOURCE_DIR = /Users/mostafaoraei/Desktop/cpp/D1/Pony

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pony.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pony.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pony.dir/flags.make

CMakeFiles/Pony.dir/main.cpp.o: CMakeFiles/Pony.dir/flags.make
CMakeFiles/Pony.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pony.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pony.dir/main.cpp.o -c /Users/mostafaoraei/Desktop/cpp/D1/Pony/main.cpp

CMakeFiles/Pony.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pony.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mostafaoraei/Desktop/cpp/D1/Pony/main.cpp > CMakeFiles/Pony.dir/main.cpp.i

CMakeFiles/Pony.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pony.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mostafaoraei/Desktop/cpp/D1/Pony/main.cpp -o CMakeFiles/Pony.dir/main.cpp.s

CMakeFiles/Pony.dir/Pony.cpp.o: CMakeFiles/Pony.dir/flags.make
CMakeFiles/Pony.dir/Pony.cpp.o: ../Pony.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Pony.dir/Pony.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pony.dir/Pony.cpp.o -c /Users/mostafaoraei/Desktop/cpp/D1/Pony/Pony.cpp

CMakeFiles/Pony.dir/Pony.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pony.dir/Pony.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mostafaoraei/Desktop/cpp/D1/Pony/Pony.cpp > CMakeFiles/Pony.dir/Pony.cpp.i

CMakeFiles/Pony.dir/Pony.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pony.dir/Pony.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mostafaoraei/Desktop/cpp/D1/Pony/Pony.cpp -o CMakeFiles/Pony.dir/Pony.cpp.s

# Object files for target Pony
Pony_OBJECTS = \
"CMakeFiles/Pony.dir/main.cpp.o" \
"CMakeFiles/Pony.dir/Pony.cpp.o"

# External object files for target Pony
Pony_EXTERNAL_OBJECTS =

Pony: CMakeFiles/Pony.dir/main.cpp.o
Pony: CMakeFiles/Pony.dir/Pony.cpp.o
Pony: CMakeFiles/Pony.dir/build.make
Pony: CMakeFiles/Pony.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Pony"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pony.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pony.dir/build: Pony

.PHONY : CMakeFiles/Pony.dir/build

CMakeFiles/Pony.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pony.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pony.dir/clean

CMakeFiles/Pony.dir/depend:
	cd /Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mostafaoraei/Desktop/cpp/D1/Pony /Users/mostafaoraei/Desktop/cpp/D1/Pony /Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug /Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug /Users/mostafaoraei/Desktop/cpp/D1/Pony/cmake-build-debug/CMakeFiles/Pony.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pony.dir/depend


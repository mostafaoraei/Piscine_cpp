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
CMAKE_SOURCE_DIR = /Users/mostafaoraei/Desktop/cpp/D0/ex02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mostafaoraei/Desktop/cpp/D0/ex02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/account.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/account.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/account.dir/flags.make

CMakeFiles/account.dir/account.cpp.o: CMakeFiles/account.dir/flags.make
CMakeFiles/account.dir/account.cpp.o: ../account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mostafaoraei/Desktop/cpp/D0/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/account.dir/account.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account.dir/account.cpp.o -c /Users/mostafaoraei/Desktop/cpp/D0/ex02/account.cpp

CMakeFiles/account.dir/account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account.dir/account.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mostafaoraei/Desktop/cpp/D0/ex02/account.cpp > CMakeFiles/account.dir/account.cpp.i

CMakeFiles/account.dir/account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account.dir/account.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mostafaoraei/Desktop/cpp/D0/ex02/account.cpp -o CMakeFiles/account.dir/account.cpp.s

# Object files for target account
account_OBJECTS = \
"CMakeFiles/account.dir/account.cpp.o"

# External object files for target account
account_EXTERNAL_OBJECTS =

libaccount.a: CMakeFiles/account.dir/account.cpp.o
libaccount.a: CMakeFiles/account.dir/build.make
libaccount.a: CMakeFiles/account.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mostafaoraei/Desktop/cpp/D0/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libaccount.a"
	$(CMAKE_COMMAND) -P CMakeFiles/account.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/account.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/account.dir/build: libaccount.a

.PHONY : CMakeFiles/account.dir/build

CMakeFiles/account.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/account.dir/cmake_clean.cmake
.PHONY : CMakeFiles/account.dir/clean

CMakeFiles/account.dir/depend:
	cd /Users/mostafaoraei/Desktop/cpp/D0/ex02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mostafaoraei/Desktop/cpp/D0/ex02 /Users/mostafaoraei/Desktop/cpp/D0/ex02 /Users/mostafaoraei/Desktop/cpp/D0/ex02/cmake-build-debug /Users/mostafaoraei/Desktop/cpp/D0/ex02/cmake-build-debug /Users/mostafaoraei/Desktop/cpp/D0/ex02/cmake-build-debug/CMakeFiles/account.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/account.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/SocketTut1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SocketTut1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SocketTut1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SocketTut1.dir/flags.make

CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o: CMakeFiles/SocketTut1.dir/flags.make
CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o: ../SocketTut1.cpp
CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o: CMakeFiles/SocketTut1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o -MF CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o.d -o CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o -c /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/SocketTut1.cpp

CMakeFiles/SocketTut1.dir/SocketTut1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SocketTut1.dir/SocketTut1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/SocketTut1.cpp > CMakeFiles/SocketTut1.dir/SocketTut1.cpp.i

CMakeFiles/SocketTut1.dir/SocketTut1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SocketTut1.dir/SocketTut1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/SocketTut1.cpp -o CMakeFiles/SocketTut1.dir/SocketTut1.cpp.s

# Object files for target SocketTut1
SocketTut1_OBJECTS = \
"CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o"

# External object files for target SocketTut1
SocketTut1_EXTERNAL_OBJECTS =

SocketTut1: CMakeFiles/SocketTut1.dir/SocketTut1.cpp.o
SocketTut1: CMakeFiles/SocketTut1.dir/build.make
SocketTut1: CMakeFiles/SocketTut1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SocketTut1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SocketTut1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SocketTut1.dir/build: SocketTut1
.PHONY : CMakeFiles/SocketTut1.dir/build

CMakeFiles/SocketTut1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SocketTut1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SocketTut1.dir/clean

CMakeFiles/SocketTut1.dir/depend:
	cd /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build/CMakeFiles/SocketTut1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SocketTut1.dir/depend


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
include CMakeFiles/Tut28b.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Tut28b.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Tut28b.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tut28b.dir/flags.make

CMakeFiles/Tut28b.dir/Tut28b.cpp.o: CMakeFiles/Tut28b.dir/flags.make
CMakeFiles/Tut28b.dir/Tut28b.cpp.o: ../Tut28b.cpp
CMakeFiles/Tut28b.dir/Tut28b.cpp.o: CMakeFiles/Tut28b.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tut28b.dir/Tut28b.cpp.o"
	/usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Tut28b.dir/Tut28b.cpp.o -MF CMakeFiles/Tut28b.dir/Tut28b.cpp.o.d -o CMakeFiles/Tut28b.dir/Tut28b.cpp.o -c /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/Tut28b.cpp

CMakeFiles/Tut28b.dir/Tut28b.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tut28b.dir/Tut28b.cpp.i"
	/usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/Tut28b.cpp > CMakeFiles/Tut28b.dir/Tut28b.cpp.i

CMakeFiles/Tut28b.dir/Tut28b.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tut28b.dir/Tut28b.cpp.s"
	/usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/Tut28b.cpp -o CMakeFiles/Tut28b.dir/Tut28b.cpp.s

# Object files for target Tut28b
Tut28b_OBJECTS = \
"CMakeFiles/Tut28b.dir/Tut28b.cpp.o"

# External object files for target Tut28b
Tut28b_EXTERNAL_OBJECTS =

Tut28b: CMakeFiles/Tut28b.dir/Tut28b.cpp.o
Tut28b: CMakeFiles/Tut28b.dir/build.make
Tut28b: CMakeFiles/Tut28b.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tut28b"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tut28b.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tut28b.dir/build: Tut28b
.PHONY : CMakeFiles/Tut28b.dir/build

CMakeFiles/Tut28b.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tut28b.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tut28b.dir/clean

CMakeFiles/Tut28b.dir/depend:
	cd /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build /home/trec/WorkRaj/Coding_Tutorials/Harry_cpp/build/CMakeFiles/Tut28b.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tut28b.dir/depend


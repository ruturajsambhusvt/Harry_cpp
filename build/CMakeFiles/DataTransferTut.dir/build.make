# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/ruturajsambhus/anaconda3/lib/python3.7/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/ruturajsambhus/anaconda3/lib/python3.7/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/DataTransferTut.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DataTransferTut.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DataTransferTut.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataTransferTut.dir/flags.make

CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o: CMakeFiles/DataTransferTut.dir/flags.make
CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o: /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/DataTransferTut.cpp
CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o: CMakeFiles/DataTransferTut.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o -MF CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o.d -o CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o -c /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/DataTransferTut.cpp

CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/DataTransferTut.cpp > CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.i

CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/DataTransferTut.cpp -o CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.s

# Object files for target DataTransferTut
DataTransferTut_OBJECTS = \
"CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o"

# External object files for target DataTransferTut
DataTransferTut_EXTERNAL_OBJECTS =

DataTransferTut: CMakeFiles/DataTransferTut.dir/DataTransferTut.cpp.o
DataTransferTut: CMakeFiles/DataTransferTut.dir/build.make
DataTransferTut: CMakeFiles/DataTransferTut.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DataTransferTut"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataTransferTut.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataTransferTut.dir/build: DataTransferTut
.PHONY : CMakeFiles/DataTransferTut.dir/build

CMakeFiles/DataTransferTut.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataTransferTut.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataTransferTut.dir/clean

CMakeFiles/DataTransferTut.dir/depend:
	cd /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/build /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/build /home/ruturajsambhus/Work/Coding_Tutorials/Harry_cpp/build/CMakeFiles/DataTransferTut.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataTransferTut.dir/depend


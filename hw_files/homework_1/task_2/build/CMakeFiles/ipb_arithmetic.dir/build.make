# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.23.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.23.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build

# Include any dependencies generated for this target.
include CMakeFiles/ipb_arithmetic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ipb_arithmetic.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ipb_arithmetic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ipb_arithmetic.dir/flags.make

CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o: CMakeFiles/ipb_arithmetic.dir/flags.make
CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o: ../src/subtract.cpp
CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o: CMakeFiles/ipb_arithmetic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o -MF CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o.d -o CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o -c /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/src/subtract.cpp

CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/src/subtract.cpp > CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.i

CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/src/subtract.cpp -o CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.s

CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o: CMakeFiles/ipb_arithmetic.dir/flags.make
CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o: ../src/sum.cpp
CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o: CMakeFiles/ipb_arithmetic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o -MF CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o.d -o CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o -c /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/src/sum.cpp

CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/src/sum.cpp > CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.i

CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/src/sum.cpp -o CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.s

# Object files for target ipb_arithmetic
ipb_arithmetic_OBJECTS = \
"CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o" \
"CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o"

# External object files for target ipb_arithmetic
ipb_arithmetic_EXTERNAL_OBJECTS =

../results/lib/libipb_arithmetic.a: CMakeFiles/ipb_arithmetic.dir/src/subtract.cpp.o
../results/lib/libipb_arithmetic.a: CMakeFiles/ipb_arithmetic.dir/src/sum.cpp.o
../results/lib/libipb_arithmetic.a: CMakeFiles/ipb_arithmetic.dir/build.make
../results/lib/libipb_arithmetic.a: CMakeFiles/ipb_arithmetic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../results/lib/libipb_arithmetic.a"
	$(CMAKE_COMMAND) -P CMakeFiles/ipb_arithmetic.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ipb_arithmetic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ipb_arithmetic.dir/build: ../results/lib/libipb_arithmetic.a
.PHONY : CMakeFiles/ipb_arithmetic.dir/build

CMakeFiles/ipb_arithmetic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ipb_arithmetic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ipb_arithmetic.dir/clean

CMakeFiles/ipb_arithmetic.dir/depend:
	cd /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2 /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2 /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build /Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_1_2/task_2/build/CMakeFiles/ipb_arithmetic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ipb_arithmetic.dir/depend


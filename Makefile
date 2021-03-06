# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/emanuel/Documents/WorkspaceTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/emanuel/Documents/WorkspaceTree

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/emanuel/Documents/WorkspaceTree/CMakeFiles /home/emanuel/Documents/WorkspaceTree/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/emanuel/Documents/WorkspaceTree/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named WorkspaceTree

# Build rule for target.
WorkspaceTree: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 WorkspaceTree
.PHONY : WorkspaceTree

# fast build rule for target.
WorkspaceTree/fast:
	$(MAKE) -f CMakeFiles/WorkspaceTree.dir/build.make CMakeFiles/WorkspaceTree.dir/build
.PHONY : WorkspaceTree/fast

src/WorkspaceNode.o: src/WorkspaceNode.cpp.o

.PHONY : src/WorkspaceNode.o

# target to build an object file
src/WorkspaceNode.cpp.o:
	$(MAKE) -f CMakeFiles/WorkspaceTree.dir/build.make CMakeFiles/WorkspaceTree.dir/src/WorkspaceNode.cpp.o
.PHONY : src/WorkspaceNode.cpp.o

src/WorkspaceNode.i: src/WorkspaceNode.cpp.i

.PHONY : src/WorkspaceNode.i

# target to preprocess a source file
src/WorkspaceNode.cpp.i:
	$(MAKE) -f CMakeFiles/WorkspaceTree.dir/build.make CMakeFiles/WorkspaceTree.dir/src/WorkspaceNode.cpp.i
.PHONY : src/WorkspaceNode.cpp.i

src/WorkspaceNode.s: src/WorkspaceNode.cpp.s

.PHONY : src/WorkspaceNode.s

# target to generate assembly for a file
src/WorkspaceNode.cpp.s:
	$(MAKE) -f CMakeFiles/WorkspaceTree.dir/build.make CMakeFiles/WorkspaceTree.dir/src/WorkspaceNode.cpp.s
.PHONY : src/WorkspaceNode.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/WorkspaceTree.dir/build.make CMakeFiles/WorkspaceTree.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/WorkspaceTree.dir/build.make CMakeFiles/WorkspaceTree.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/WorkspaceTree.dir/build.make CMakeFiles/WorkspaceTree.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... WorkspaceTree"
	@echo "... edit_cache"
	@echo "... src/WorkspaceNode.o"
	@echo "... src/WorkspaceNode.i"
	@echo "... src/WorkspaceNode.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system


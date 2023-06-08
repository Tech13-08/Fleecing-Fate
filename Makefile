# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /data/home/csmajs/ftuls001/final-project-ftuls001-ywong042-ajare002-twu148

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/home/csmajs/ftuls001/final-project-ftuls001-ywong042-ajare002-twu148

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /data/home/csmajs/ftuls001/final-project-ftuls001-ywong042-ajare002-twu148/CMakeFiles /data/home/csmajs/ftuls001/final-project-ftuls001-ywong042-ajare002-twu148//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /data/home/csmajs/ftuls001/final-project-ftuls001-ywong042-ajare002-twu148/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named test

# Build rule for target.
test: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 test
.PHONY : test

# fast build rule for target.
test/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/build
.PHONY : test/fast

#=============================================================================
# Target rules for targets named main

# Build rule for target.
main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 main
.PHONY : main

# fast build rule for target.
main/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/build
.PHONY : main/fast

#=============================================================================
# Target rules for targets named gmock_main

# Build rule for target.
gmock_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock_main
.PHONY : gmock_main

# fast build rule for target.
gmock_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest-build/googlemock/CMakeFiles/gmock_main.dir/build.make googletest-build/googlemock/CMakeFiles/gmock_main.dir/build
.PHONY : gmock_main/fast

#=============================================================================
# Target rules for targets named gmock

# Build rule for target.
gmock: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock
.PHONY : gmock

# fast build rule for target.
gmock/fast:
	$(MAKE) $(MAKESILENT) -f googletest-build/googlemock/CMakeFiles/gmock.dir/build.make googletest-build/googlemock/CMakeFiles/gmock.dir/build
.PHONY : gmock/fast

#=============================================================================
# Target rules for targets named gtest_main

# Build rule for target.
gtest_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest_main
.PHONY : gtest_main

# fast build rule for target.
gtest_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest-build/googletest/CMakeFiles/gtest_main.dir/build.make googletest-build/googletest/CMakeFiles/gtest_main.dir/build
.PHONY : gtest_main/fast

#=============================================================================
# Target rules for targets named gtest

# Build rule for target.
gtest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest
.PHONY : gtest

# fast build rule for target.
gtest/fast:
	$(MAKE) $(MAKESILENT) -f googletest-build/googletest/CMakeFiles/gtest.dir/build.make googletest-build/googletest/CMakeFiles/gtest.dir/build
.PHONY : gtest/fast

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.s
.PHONY : main.cpp.s

src/Battle/Battle.o: src/Battle/Battle.cpp.o
.PHONY : src/Battle/Battle.o

# target to build an object file
src/Battle/Battle.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Battle/Battle.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Battle/Battle.cpp.o
.PHONY : src/Battle/Battle.cpp.o

src/Battle/Battle.i: src/Battle/Battle.cpp.i
.PHONY : src/Battle/Battle.i

# target to preprocess a source file
src/Battle/Battle.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Battle/Battle.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Battle/Battle.cpp.i
.PHONY : src/Battle/Battle.cpp.i

src/Battle/Battle.s: src/Battle/Battle.cpp.s
.PHONY : src/Battle/Battle.s

# target to generate assembly for a file
src/Battle/Battle.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Battle/Battle.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Battle/Battle.cpp.s
.PHONY : src/Battle/Battle.cpp.s

src/Character/Berserker.o: src/Character/Berserker.cpp.o
.PHONY : src/Character/Berserker.o

# target to build an object file
src/Character/Berserker.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Berserker.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Berserker.cpp.o
.PHONY : src/Character/Berserker.cpp.o

src/Character/Berserker.i: src/Character/Berserker.cpp.i
.PHONY : src/Character/Berserker.i

# target to preprocess a source file
src/Character/Berserker.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Berserker.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Berserker.cpp.i
.PHONY : src/Character/Berserker.cpp.i

src/Character/Berserker.s: src/Character/Berserker.cpp.s
.PHONY : src/Character/Berserker.s

# target to generate assembly for a file
src/Character/Berserker.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Berserker.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Berserker.cpp.s
.PHONY : src/Character/Berserker.cpp.s

src/Character/Character.o: src/Character/Character.cpp.o
.PHONY : src/Character/Character.o

# target to build an object file
src/Character/Character.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Character.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Character.cpp.o
.PHONY : src/Character/Character.cpp.o

src/Character/Character.i: src/Character/Character.cpp.i
.PHONY : src/Character/Character.i

# target to preprocess a source file
src/Character/Character.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Character.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Character.cpp.i
.PHONY : src/Character/Character.cpp.i

src/Character/Character.s: src/Character/Character.cpp.s
.PHONY : src/Character/Character.s

# target to generate assembly for a file
src/Character/Character.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Character.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Character.cpp.s
.PHONY : src/Character/Character.cpp.s

src/Character/Enemy.o: src/Character/Enemy.cpp.o
.PHONY : src/Character/Enemy.o

# target to build an object file
src/Character/Enemy.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Enemy.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Enemy.cpp.o
.PHONY : src/Character/Enemy.cpp.o

src/Character/Enemy.i: src/Character/Enemy.cpp.i
.PHONY : src/Character/Enemy.i

# target to preprocess a source file
src/Character/Enemy.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Enemy.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Enemy.cpp.i
.PHONY : src/Character/Enemy.cpp.i

src/Character/Enemy.s: src/Character/Enemy.cpp.s
.PHONY : src/Character/Enemy.s

# target to generate assembly for a file
src/Character/Enemy.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Enemy.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Enemy.cpp.s
.PHONY : src/Character/Enemy.cpp.s

src/Character/Player.o: src/Character/Player.cpp.o
.PHONY : src/Character/Player.o

# target to build an object file
src/Character/Player.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Player.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Player.cpp.o
.PHONY : src/Character/Player.cpp.o

src/Character/Player.i: src/Character/Player.cpp.i
.PHONY : src/Character/Player.i

# target to preprocess a source file
src/Character/Player.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Player.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Player.cpp.i
.PHONY : src/Character/Player.cpp.i

src/Character/Player.s: src/Character/Player.cpp.s
.PHONY : src/Character/Player.s

# target to generate assembly for a file
src/Character/Player.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Player.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Player.cpp.s
.PHONY : src/Character/Player.cpp.s

src/Character/Rogue.o: src/Character/Rogue.cpp.o
.PHONY : src/Character/Rogue.o

# target to build an object file
src/Character/Rogue.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Rogue.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Rogue.cpp.o
.PHONY : src/Character/Rogue.cpp.o

src/Character/Rogue.i: src/Character/Rogue.cpp.i
.PHONY : src/Character/Rogue.i

# target to preprocess a source file
src/Character/Rogue.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Rogue.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Rogue.cpp.i
.PHONY : src/Character/Rogue.cpp.i

src/Character/Rogue.s: src/Character/Rogue.cpp.s
.PHONY : src/Character/Rogue.s

# target to generate assembly for a file
src/Character/Rogue.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Character/Rogue.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Character/Rogue.cpp.s
.PHONY : src/Character/Rogue.cpp.s

src/Inventory/Inventory.o: src/Inventory/Inventory.cpp.o
.PHONY : src/Inventory/Inventory.o

# target to build an object file
src/Inventory/Inventory.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Inventory/Inventory.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Inventory/Inventory.cpp.o
.PHONY : src/Inventory/Inventory.cpp.o

src/Inventory/Inventory.i: src/Inventory/Inventory.cpp.i
.PHONY : src/Inventory/Inventory.i

# target to preprocess a source file
src/Inventory/Inventory.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Inventory/Inventory.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Inventory/Inventory.cpp.i
.PHONY : src/Inventory/Inventory.cpp.i

src/Inventory/Inventory.s: src/Inventory/Inventory.cpp.s
.PHONY : src/Inventory/Inventory.s

# target to generate assembly for a file
src/Inventory/Inventory.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Inventory/Inventory.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Inventory/Inventory.cpp.s
.PHONY : src/Inventory/Inventory.cpp.s

src/Items/Item.o: src/Items/Item.cpp.o
.PHONY : src/Items/Item.o

# target to build an object file
src/Items/Item.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Items/Item.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Items/Item.cpp.o
.PHONY : src/Items/Item.cpp.o

src/Items/Item.i: src/Items/Item.cpp.i
.PHONY : src/Items/Item.i

# target to preprocess a source file
src/Items/Item.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Items/Item.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Items/Item.cpp.i
.PHONY : src/Items/Item.cpp.i

src/Items/Item.s: src/Items/Item.cpp.s
.PHONY : src/Items/Item.s

# target to generate assembly for a file
src/Items/Item.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Items/Item.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Items/Item.cpp.s
.PHONY : src/Items/Item.cpp.s

src/Location/Dungeon.o: src/Location/Dungeon.cpp.o
.PHONY : src/Location/Dungeon.o

# target to build an object file
src/Location/Dungeon.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Dungeon.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Dungeon.cpp.o
.PHONY : src/Location/Dungeon.cpp.o

src/Location/Dungeon.i: src/Location/Dungeon.cpp.i
.PHONY : src/Location/Dungeon.i

# target to preprocess a source file
src/Location/Dungeon.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Dungeon.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Dungeon.cpp.i
.PHONY : src/Location/Dungeon.cpp.i

src/Location/Dungeon.s: src/Location/Dungeon.cpp.s
.PHONY : src/Location/Dungeon.s

# target to generate assembly for a file
src/Location/Dungeon.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Dungeon.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Dungeon.cpp.s
.PHONY : src/Location/Dungeon.cpp.s

src/Location/DungeonRoom.o: src/Location/DungeonRoom.cpp.o
.PHONY : src/Location/DungeonRoom.o

# target to build an object file
src/Location/DungeonRoom.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/DungeonRoom.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/DungeonRoom.cpp.o
.PHONY : src/Location/DungeonRoom.cpp.o

src/Location/DungeonRoom.i: src/Location/DungeonRoom.cpp.i
.PHONY : src/Location/DungeonRoom.i

# target to preprocess a source file
src/Location/DungeonRoom.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/DungeonRoom.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/DungeonRoom.cpp.i
.PHONY : src/Location/DungeonRoom.cpp.i

src/Location/DungeonRoom.s: src/Location/DungeonRoom.cpp.s
.PHONY : src/Location/DungeonRoom.s

# target to generate assembly for a file
src/Location/DungeonRoom.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/DungeonRoom.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/DungeonRoom.cpp.s
.PHONY : src/Location/DungeonRoom.cpp.s

src/Location/LocationManager.o: src/Location/LocationManager.cpp.o
.PHONY : src/Location/LocationManager.o

# target to build an object file
src/Location/LocationManager.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/LocationManager.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/LocationManager.cpp.o
.PHONY : src/Location/LocationManager.cpp.o

src/Location/LocationManager.i: src/Location/LocationManager.cpp.i
.PHONY : src/Location/LocationManager.i

# target to preprocess a source file
src/Location/LocationManager.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/LocationManager.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/LocationManager.cpp.i
.PHONY : src/Location/LocationManager.cpp.i

src/Location/LocationManager.s: src/Location/LocationManager.cpp.s
.PHONY : src/Location/LocationManager.s

# target to generate assembly for a file
src/Location/LocationManager.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/LocationManager.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/LocationManager.cpp.s
.PHONY : src/Location/LocationManager.cpp.s

src/Location/MoveSelector.o: src/Location/MoveSelector.cpp.o
.PHONY : src/Location/MoveSelector.o

# target to build an object file
src/Location/MoveSelector.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/MoveSelector.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/MoveSelector.cpp.o
.PHONY : src/Location/MoveSelector.cpp.o

src/Location/MoveSelector.i: src/Location/MoveSelector.cpp.i
.PHONY : src/Location/MoveSelector.i

# target to preprocess a source file
src/Location/MoveSelector.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/MoveSelector.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/MoveSelector.cpp.i
.PHONY : src/Location/MoveSelector.cpp.i

src/Location/MoveSelector.s: src/Location/MoveSelector.cpp.s
.PHONY : src/Location/MoveSelector.s

# target to generate assembly for a file
src/Location/MoveSelector.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/MoveSelector.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/MoveSelector.cpp.s
.PHONY : src/Location/MoveSelector.cpp.s

src/Location/Store.o: src/Location/Store.cpp.o
.PHONY : src/Location/Store.o

# target to build an object file
src/Location/Store.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Store.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Store.cpp.o
.PHONY : src/Location/Store.cpp.o

src/Location/Store.i: src/Location/Store.cpp.i
.PHONY : src/Location/Store.i

# target to preprocess a source file
src/Location/Store.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Store.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Store.cpp.i
.PHONY : src/Location/Store.cpp.i

src/Location/Store.s: src/Location/Store.cpp.s
.PHONY : src/Location/Store.s

# target to generate assembly for a file
src/Location/Store.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Store.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Store.cpp.s
.PHONY : src/Location/Store.cpp.s

src/Location/Village.o: src/Location/Village.cpp.o
.PHONY : src/Location/Village.o

# target to build an object file
src/Location/Village.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Village.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Village.cpp.o
.PHONY : src/Location/Village.cpp.o

src/Location/Village.i: src/Location/Village.cpp.i
.PHONY : src/Location/Village.i

# target to preprocess a source file
src/Location/Village.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Village.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Village.cpp.i
.PHONY : src/Location/Village.cpp.i

src/Location/Village.s: src/Location/Village.cpp.s
.PHONY : src/Location/Village.s

# target to generate assembly for a file
src/Location/Village.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/src/Location/Village.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Location/Village.cpp.s
.PHONY : src/Location/Village.cpp.s

test/battleTest.o: test/battleTest.cpp.o
.PHONY : test/battleTest.o

# target to build an object file
test/battleTest.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test/battleTest.cpp.o
.PHONY : test/battleTest.cpp.o

test/battleTest.i: test/battleTest.cpp.i
.PHONY : test/battleTest.i

# target to preprocess a source file
test/battleTest.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test/battleTest.cpp.i
.PHONY : test/battleTest.cpp.i

test/battleTest.s: test/battleTest.cpp.s
.PHONY : test/battleTest.s

# target to generate assembly for a file
test/battleTest.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test/battleTest.cpp.s
.PHONY : test/battleTest.cpp.s

test/testLocation.o: test/testLocation.cpp.o
.PHONY : test/testLocation.o

# target to build an object file
test/testLocation.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test/testLocation.cpp.o
.PHONY : test/testLocation.cpp.o

test/testLocation.i: test/testLocation.cpp.i
.PHONY : test/testLocation.i

# target to preprocess a source file
test/testLocation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test/testLocation.cpp.i
.PHONY : test/testLocation.cpp.i

test/testLocation.s: test/testLocation.cpp.s
.PHONY : test/testLocation.s

# target to generate assembly for a file
test/testLocation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test/testLocation.cpp.s
.PHONY : test/testLocation.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... gmock"
	@echo "... gmock_main"
	@echo "... gtest"
	@echo "... gtest_main"
	@echo "... main"
	@echo "... test"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... src/Battle/Battle.o"
	@echo "... src/Battle/Battle.i"
	@echo "... src/Battle/Battle.s"
	@echo "... src/Character/Berserker.o"
	@echo "... src/Character/Berserker.i"
	@echo "... src/Character/Berserker.s"
	@echo "... src/Character/Character.o"
	@echo "... src/Character/Character.i"
	@echo "... src/Character/Character.s"
	@echo "... src/Character/Enemy.o"
	@echo "... src/Character/Enemy.i"
	@echo "... src/Character/Enemy.s"
	@echo "... src/Character/Player.o"
	@echo "... src/Character/Player.i"
	@echo "... src/Character/Player.s"
	@echo "... src/Character/Rogue.o"
	@echo "... src/Character/Rogue.i"
	@echo "... src/Character/Rogue.s"
	@echo "... src/Inventory/Inventory.o"
	@echo "... src/Inventory/Inventory.i"
	@echo "... src/Inventory/Inventory.s"
	@echo "... src/Items/Item.o"
	@echo "... src/Items/Item.i"
	@echo "... src/Items/Item.s"
	@echo "... src/Location/Dungeon.o"
	@echo "... src/Location/Dungeon.i"
	@echo "... src/Location/Dungeon.s"
	@echo "... src/Location/DungeonRoom.o"
	@echo "... src/Location/DungeonRoom.i"
	@echo "... src/Location/DungeonRoom.s"
	@echo "... src/Location/LocationManager.o"
	@echo "... src/Location/LocationManager.i"
	@echo "... src/Location/LocationManager.s"
	@echo "... src/Location/MoveSelector.o"
	@echo "... src/Location/MoveSelector.i"
	@echo "... src/Location/MoveSelector.s"
	@echo "... src/Location/Store.o"
	@echo "... src/Location/Store.i"
	@echo "... src/Location/Store.s"
	@echo "... src/Location/Village.o"
	@echo "... src/Location/Village.i"
	@echo "... src/Location/Village.s"
	@echo "... test/battleTest.o"
	@echo "... test/battleTest.i"
	@echo "... test/battleTest.s"
	@echo "... test/testLocation.o"
	@echo "... test/testLocation.i"
	@echo "... test/testLocation.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system


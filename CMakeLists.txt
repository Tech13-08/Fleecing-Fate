cmake_minimum_required(VERSION 3.15)
project(gtest_coverage)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS --coverage)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

# Reference: https://github.com/google/googletest/tree/main/googletest#incorporating-into-an-existing-cmake-project
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif ()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif ()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif ()


set(LOCATION_SOURCE_FILES src/Location/Dungeon.cpp src/Location/DungeonRoom.cpp src/Location/Store.cpp src/Location/Village.cpp src/Location/LocationManager.cpp src/Location/MoveSelector.cpp)
set(BATTLE_SOURCE_FILES src/Battle/Battle.cpp)
set(INVENTORY_SOURCE_FILES src/Inventory/Inventory.cpp)
set(ITEMS_SOURCE_FILES src/Items/Item.cpp)
set(CHARACTER_SOURCE_FILES src/Character/Character.cpp src/Character/Player.cpp src/Character/Enemy.cpp src/Character/Berserker.cpp src/Character/Rogue.cpp src/Character/CharacterSelector.cpp)
add_executable(main main.cpp ${LOCATION_SOURCE_FILES} ${BATTLE_SOURCE_FILES} ${INVENTORY_SOURCE_FILES} ${ITEMS_SOURCE_FILES} ${CHARACTER_SOURCE_FILES})

set(TEST_FILES test/testLocation.cpp test/battleTest.cpp)
add_executable(test ${TEST_FILES} ${LOCATION_SOURCE_FILES} ${BATTLE_SOURCE_FILES} ${INVENTORY_SOURCE_FILES} ${ITEMS_SOURCE_FILES} ${CHARACTER_SOURCE_FILES})


target_link_libraries(test gtest gtest_main)

cmake_minimum_required(VERSION 4.2)
project(DodgeAndSurvive)

set(CMAKE_CXX_STANDARD 26)

add_subdirectory(vendored/raylib EXCLUDE_FROM_ALL)

add_executable(DodgeAndSurvive main.cpp
        src/Engine/Game.cpp
        src/Engine/Game.h
        src/entites/Player.cpp
        src/entites/Player.h)

target_link_libraries(DodgeAndSurvive PRIVATE raylib)

target_include_directories(DodgeAndSurvive PRIVATE vendored/raylib/src)

# Copy Assets folder to build directory
add_custom_command(TARGET DodgeAndSurvive POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/assets
        $<TARGET_FILE_DIR:DodgeAndSurvive>/assets)

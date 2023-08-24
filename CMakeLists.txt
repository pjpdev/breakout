cmake_minimum_required(VERSION 3.16)

project(
    Breakout
    VERSION 0.0.1
    LANGUAGES CXX
    )

add_executable(Breakout)

include(AddFileDependencies)

add_subdirectory(${CMAKE_SOURCE_DIR}/src)

target_link_libraries(Breakout raylib)

cmake_minimum_required(VERSION 3.20)

project(cs-cxx-bindings)

add_library(demolibrary SHARED src/demolib.cpp)

target_include_directories(demolibrary PUBLIC include)

set_target_properties(demolibrary
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)
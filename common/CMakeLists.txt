cmake_minimum_required(VERSION 3.10)

option(ENABLE_EXAMPLES "To enable compiling with examples" OFF)

# set the project name
project(Tutorial)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# set CMAKE_BUILD_TYPE to Release as default
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
  message(STATUS "CMAKE_BUILD_TYPE is not defined, setting to ${CMAKE_BUILD_TYPE}")
endif()

# BUILD_SHARED_LIBS set to ON so by default so file is generated
if(NOT BUILD_SHARED_LIBS)
    set(BUILD_SHARED_LIBS ON)
endif()

add_subdirectory(lib)
if(ENABLE_EXAMPLES)
    add_subdirectory(example)
endif()

add_subdirectory(test)






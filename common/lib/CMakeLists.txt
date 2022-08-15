message(STATUS "CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
if(CMAKE_BUILD_TYPE STREQUAL Release)
    add_compile_options(-O3 -Werror -pedantic)
    message(STATUS "Compiling in Release mode")
elseif(CMAKE_BUILD_TYPE STREQUAL Debug)
    add_compile_options(-g -Wall -Wextra -pedantic)
    message(STATUS "Compiling in Debug mode")
endif()

add_library(numerical_methods squareroot_newton.cc)

# target_include_directories should mention the absolute path
target_include_directories(numerical_methods PUBLIC "${CMAKE_SOURCE_DIR}/include")

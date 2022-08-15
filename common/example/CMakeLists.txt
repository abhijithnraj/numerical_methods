message(STATUS "CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
if(CMAKE_BUILD_TYPE STREQUAL Release)
    add_compile_options(-O3 -Werror -pedantic)
    message(STATUS "Compiling in Release mode")
elseif(CMAKE_BUILD_TYPE STREQUAL Debug)
    add_compile_options(-g -Wall -Wextra -pedantic)
    message(STATUS "Compiling in Debug mode")
endif()

add_executable(main main.cc)
target_link_libraries(main numerical_methods)

# target_include_directories should mention the absolute path
target_include_directories(main PUBLIC "${CMAKE_SOURCE_DIR}/include")

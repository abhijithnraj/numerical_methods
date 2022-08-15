include(FetchContent)
include(GoogleTest)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG       release-1.12.1
)

FetchContent_MakeAvailable(googletest)
# find_package(googletest)

message(STATUS "googletest:${googletest_SOURCE_DIR}")

message(STATUS "CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
if(CMAKE_BUILD_TYPE STREQUAL Release)
    add_compile_options(-O3 -Werror -pedantic)
    message(STATUS "Compiling in Release mode")
elseif(CMAKE_BUILD_TYPE STREQUAL Debug)
    add_compile_options(-g -Wall -Wextra -pedantic)
    message(STATUS "Compiling in Debug mode")
endif()

add_executable(test_squareroot_newton test_squareroot_newton.cc)
target_link_libraries(test_squareroot_newton numerical_methods)
target_link_libraries(test_squareroot_newton gtest)

# target_include_directories should mention the absolute path
target_include_directories(test_squareroot_newton PUBLIC "${CMAKE_SOURCE_DIR}/include")
# target_include_directories(test_squareroot_newton PUBLIC "${googletest_SOURCE_DIR}/googletest/include")

gtest_add_tests(TARGET test_squareroot_newton)
# gtest_discover_tests(test_squareroot_newton)
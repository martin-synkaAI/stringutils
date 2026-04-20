cmake_minimum_required(VERSION 3.16)
project(StringUtils VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(BUILD_TESTS "Build unit tests" ON)

add_library(stringutils src/stringutils.cpp)
target_include_directories(stringutils PUBLIC include)

add_executable(stringutils_demo src/main.cpp)
target_link_libraries(stringutils_demo PRIVATE stringutils)

if(BUILD_TESTS)
    enable_testing()
    include(FetchContent)
    FetchContent_Declare(googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip)
    FetchContent_MakeAvailable(googletest)
    add_executable(stringutils_tests tests/test_stringutils.cpp)
    target_link_libraries(stringutils_tests PRIVATE stringutils GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(stringutils_tests)
endif()

set(CPACK_PACKAGE_NAME "StringUtils")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_GENERATOR "TGZ")
include(CPack)
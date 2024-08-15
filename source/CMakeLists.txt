cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER g++)

project(
    TEST_PROJECT
    VERSION 0.0.1
    DESCRIPTION "Test projects with libs"
    LANGUAGES CXX
)

add_library(libmath STATIC src/LibMath/src/math.cpp)
target_include_directories(libmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/LibMath/include)

add_library(libstat STATIC src/LibStat/src/stats.cpp)
target_include_directories(libstat PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/LibStat/include)
target_link_libraries(libstat PRIVATE libmath)

add_executable(rooster main.cpp)
target_include_directories(rooster PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(rooster PUBLIC libstat)

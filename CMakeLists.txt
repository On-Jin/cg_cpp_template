cmake_minimum_required(VERSION 3.16)
set(NAME cg_cpp_template)
project(${NAME})

include_directories(${CMAKE_SOURCE_DIR}/src/)

set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(extern/json)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(benchmark)

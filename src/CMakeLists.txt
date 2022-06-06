########################################
# Bot
########################################

cmake_minimum_required(VERSION 3.16)
set(NAME cg_cpp_template)
project(${NAME})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DLOCAL=true -DROOT_PATH=\\\"${CMAKE_CURRENT_SOURCE_DIR}\\\"")

add_library(${NAME}_lib STATIC
        # your bot files
        )

add_executable(bot_${NAME} main.cpp)
target_link_libraries(bot_${NAME} ${NAME}_lib nlohmann_json::nlohmann_json)

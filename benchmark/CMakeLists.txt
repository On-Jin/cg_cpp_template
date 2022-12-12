########################################
# Benchmark
########################################

include(FetchContent)

# Externally provided libraries
FetchContent_Declare(googlebenchmark
        GIT_REPOSITORY https://github.com/google/benchmark.git
        GIT_TAG main) # need master for benchmark::benchmark

FetchContent_MakeAvailable(
        googlebenchmark)

add_executable(g_benchmark main.cpp)
target_link_libraries(g_benchmark benchmark::benchmark ${NAME}_lib nlohmann_json::nlohmann_json)
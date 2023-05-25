########################################
# Testing
########################################

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.8.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# google test is a git submodule for the project, and it is also cmake-based
enable_testing()

#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false test_main.cpp compact.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(runUnitTests ${TEST_SOURCES} TestsUtils.h TestsUtils.cpp)

add_test(NAME runUnitTests COMMAND runUnitTests)

target_link_libraries(runUnitTests PUBLIC ${NAME}_lib gtest gmock gtest_main nlohmann_json::nlohmann_json)

add_test(UnitTests runUnitTests)

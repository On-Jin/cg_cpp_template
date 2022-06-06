#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include <fstream>
#include <nlohmann/json.hpp>
#include <stdexcept>
#include "TestsUtils.h"

// Exception comparison
TEST(Basic, Game_01) {
    EXPECT_EQ(1, 1);
}

// When you expect an Exception
TEST(False, SpellNotRepetable) {
    EXPECT_THAT(
            []() {
                std::vector<int> myvector(10);
                myvector.at(20) = 100;
            },
            Throws<std::out_of_range>(Property(&std::out_of_range::what, testing::HasSubstr("vector::_M_range_check: __n (which is 20) >= this->size() (which is 10)")))
    );
}

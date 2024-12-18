#include <gtest/gtest.h>
#include "../include/week_8.hpp"

TEST(coinChange, Basic_1) {
    std::vector<int> coins = {1, 2, 5};
    auto amount = 11;
    ASSERT_EQ(3, coinChange(coins, amount));
}

TEST(coinChange, Basic_2) {
    std::vector<int> coins = {1, 1, 5};
    auto amount = 12;
    ASSERT_EQ(4, coinChange(coins, amount));
}

TEST(coinChange, Basic_3) {
    std::vector<int> coins = {10, 111, 5};
    auto amount = 1;
    ASSERT_EQ(-1, coinChange(coins, amount));
}

TEST(coinChange, Basic_4) {
    std::vector<int> coins = {1, 11, 5};
    auto amount = 5;
    ASSERT_EQ(1, coinChange(coins, amount));
}
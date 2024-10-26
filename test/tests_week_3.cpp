#include <gtest/gtest.h>
#include "../include/week_3.hpp"

TEST(insertion_index, Basic_1) {
    std::vector<int> input{1, 3};
    auto number = 2;

    auto valid_output = 1;

    ASSERT_EQ(valid_output, insertion_index(input, number));
}

TEST(insertion_index, Basic_2) {
    std::vector<int> input{1, 2, 3};
    auto number = 3;

    auto valid_output = 2;

    ASSERT_EQ(valid_output, insertion_index(input, number));
}

TEST(insertion_index, Basic_3) {
    std::vector<int> input{1, 2, 3, 10};
    auto number = 4;

    auto valid_output = 3;

    ASSERT_EQ(valid_output, insertion_index(input, number));
}

TEST(find_min_subarr, Basic_1) {
    std::vector<int> input{
        8, 11, 12, 16, 18, 21, 33, 36, 48, 54, 632};

    auto number = 16;

    std::vector<int> valid_output{
        2, 4};

    ASSERT_EQ(valid_output, find_min_subarr(input, number));
}

TEST(find_min_subarr, Basic_2) {
    std::vector<int> input{
        8, 11, 12, 16, 18, 21, 33, 36, 48, 54, 63, 64};

    auto number = 36;

    std::vector<int> valid_output{
        4, 8};

    ASSERT_EQ(valid_output, find_min_subarr(input, number));
}

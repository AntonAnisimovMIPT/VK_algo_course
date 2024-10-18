#include <gtest/gtest.h>
#include "../include/week_1.hpp"

TEST(Task_1, Basic_1) {

    std::vector<int> input{
        0, 0, 1, 0, 3, 12};

    std::vector<int> valid_output{
        1, 3, 12, 0, 0, 0};

    ASSERT_EQ(valid_output, math_control(input));
}

TEST(Task_1, Basic_2) {

    std::vector<int> input{
        0, 0, 0, 18, 16, 0, 0, 77, 99};

    std::vector<int> valid_output{
        18, 16, 77, 99, 0, 0, 0, 0, 0};

    ASSERT_EQ(valid_output, math_control(input));
}

TEST(Task_1, Basic_3) {

    std::vector<int> input{
        0, 33, 57, 88, 60, 0, 0, 80, 99};

    std::vector<int> valid_output{
        33, 57, 88, 60, 80, 99, 0, 0, 0};

    ASSERT_EQ(valid_output, math_control(input));
}

TEST(Task_1, Basic_4) {

    std::vector<int> input{
        0, 0, 0, 100};

    std::vector<int> valid_output{
        100, 0, 0, 0};

    ASSERT_EQ(valid_output, math_control(input));
}

TEST(Task_2, Basic_1) {

    std::vector<int> arr{1, 2, 4, 0, 11};

    auto elem = 2;

    std::vector<int> valid_output{1, 4, 0, 11};

    ASSERT_EQ(valid_output, remove_elements(arr, elem));
}

TEST(Task_2, Basic_2) {

    std::vector<int> arr{8, 8, 8, 9};

    auto elem = 8;

    std::vector<int> valid_output{9};

    ASSERT_EQ(valid_output, remove_elements(arr, elem));
}

TEST(Task_3, Basic_1) {

    std::vector<int> arr{1, 2, 4, 0, 11};

    auto valid_output = 11;

    ASSERT_EQ(valid_output, find_max_elem(arr));
}

TEST(Task_3, Basic_2) {

    std::vector<int> arr{8, 8, 8, 8};

    auto valid_output = 8;

    ASSERT_EQ(valid_output, find_max_elem(arr));
}

TEST(Task_3, Basic_3) {

    std::vector<int> arr{95, 87, 100, 92, 85};

    auto valid_output = 100;

    ASSERT_EQ(valid_output, find_max_elem(arr));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
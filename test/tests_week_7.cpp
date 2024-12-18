#include <gtest/gtest.h>
#include "../include/week_7.hpp"

TEST(mergeKSortedArrays, Basic_1) {
    std::vector<std::vector<int>> arrays = {
        {1, 4, 5},
        {1, 3, 4},
        {2, 6}};

    std::vector<int> mergedArray = mergeKSortedArrays(arrays);
    std::vector<int> expected = {1, 1, 2, 3, 4, 4, 5, 6};
    ASSERT_EQ(mergedArray, expected);
}

TEST(mergeKSortedArrays, Basic_2) {
    std::vector<std::vector<int>> arrays = {
        {1, 1, 1, 11},
        {1, 4},
        {2, 6},
        {5, 21, 34, 54}};

    std::vector<int> mergedArray = mergeKSortedArrays(arrays);
    std::vector<int> expected = {1, 1, 1, 1, 2, 4, 5, 6, 11, 21, 34, 54};
    ASSERT_EQ(mergedArray, expected);
}
#include <gtest/gtest.h>
#include "../include/week_4.hpp"
#include <algorithm>

TEST(shell_sort, Basic_1) {
    std::vector<int> input{1, 3, 3, 2, 6, -1, 23, -9, 10, 2};
    auto valid_output = input;

    std::sort(valid_output.begin(), valid_output.end(), std::less<int>());
    auto output = shell_sort(input);

    ASSERT_EQ(valid_output, output);
}

TEST(feed_animals, Basic_1) {
    std::vector<int> animals{3, 4, 7};
    std::vector<int> feed{8, 1, 2};

    ASSERT_EQ(1, feed_animals(animals, feed));
}

TEST(feed_animals, Basic_2) {
    std::vector<int> animals{3, 8, 1, 4};
    std::vector<int> feed{1, 1, 2};

    ASSERT_EQ(1, feed_animals(animals, feed));
}

TEST(feed_animals, Basic_3) {
    std::vector<int> animals{1, 2, 2};
    std::vector<int> feed{7, 1};

    ASSERT_EQ(2, feed_animals(animals, feed));
}

TEST(feed_animals, Basic_4) {
    std::vector<int> animals{8, 2, 3, 2};
    std::vector<int> feed{1, 4, 3, 8};

    ASSERT_EQ(3, feed_animals(animals, feed));
}

TEST(two_sum, Basic_1) {
    std::vector<int> arr{1, 23, 4, 6, 5, 19};
    auto target = 11;

    std::set<int> valid_output = {5, 6};

    ASSERT_EQ(valid_output, two_sum(arr, target));
}

TEST(two_sum, Basic_2) {
    std::vector<int> arr{1, 23, 4, 6, 5, 19};
    auto target = 5;

    std::set<int> valid_output = {1, 4};

    ASSERT_EQ(valid_output, two_sum(arr, target));
}

TEST(two_sum, Basic_3) {
    std::vector<int> arr{1, 23, 4, 6, 5, 17};
    auto target = 33;

    std::set<int> valid_output = {-1};

    ASSERT_EQ(valid_output, two_sum(arr, target));
}

TEST(anagram, Basic_1) {
    std::vector<std::string> input{"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> valid_output = {{"bat"}, {"tan", "nat"}, {"eat", "tea", "ate"}};

    ASSERT_EQ(valid_output, anagram(input));
}

TEST(anagram, Basic_2) {
    std::vector<std::string> input{"won", "now", "aaa", "ooo", "ooo"};
    std::vector<std::vector<std::string>> valid_output = {{"ooo", "ooo"}, {"aaa"}, {"won", "now"}};

    ASSERT_EQ(valid_output, anagram(input));
}

TEST(mock_non_valid, non_valid) {

    ASSERT_EQ(1, 2);
}
#include <gtest/gtest.h>
#include "../include/week_1.hpp"

TEST(Task_1, Basic) {

    std::vector<std::vector<int>> inputs{
        {0, 0, 1, 0, 3, 12}};

    std::vector<std::vector<int>> outputs{
        {1, 3, 12, 0, 0, 0}};

    ASSERT_EQ(inputs.size(), outputs.size());

    for (size_t i = 0; i < inputs.size(); i++) {
        ASSERT_EQ(outputs[i], math_control(inputs[i]));
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
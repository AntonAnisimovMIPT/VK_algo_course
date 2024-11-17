#include <iostream>
#include <vector>
#include "../../include/week_6.hpp"

int main() {
    std::vector<int> input{16, 10, 22, 6, 12, 18, 24, 2, 8, 11, 13, 17, 21, 23};
    tree_print_helper(input);
}
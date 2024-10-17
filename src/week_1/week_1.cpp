#include <vector>
#include <iostream>

std::vector<int> math_control(std::vector<int>& input) {
    auto slow_idx = 0;
    auto fast_idx = 0;

    while (fast_idx < input.size()) {
        if (input[fast_idx] != 0) {
            std::swap(input[fast_idx], input[slow_idx]);
            ++slow_idx;
        }
        ++fast_idx;
    }
    return input;
}

std::vector<int> remove_elements(std::vector<int>& input, int target) {
    std::vector<int> result(input.size());
    auto result_idx = 0;

    for (const auto& i : input) {
        if (i != target) {
            result[result_idx] = i;
            ++result_idx;
        }
    }
    result.resize(result_idx);

    return result;
}

int find_max_elem(std::vector<int>& input) {
    auto max_elem = input[0];

    for (const auto& i : input) {
        if (i > max_elem) {
            max_elem = i;
        }
    }

    return max_elem;
}
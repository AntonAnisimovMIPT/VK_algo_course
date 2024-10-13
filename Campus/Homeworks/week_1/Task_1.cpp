#include <vector>
#include <iostream>

void math_control(std::vector<int>& input) {
    auto slow_idx = 0;
    auto fast_idx = 0;

    while (fast_idx < input.size()) {
        if (input[fast_idx] != 0) {
            std::swap(input[fast_idx], input[slow_idx]);
            ++slow_idx;
        }
        ++fast_idx;
    }
}

int main() {
    std::size_t size;
    std::cin >> size;

    std::vector<int> data(size);
    for (auto& i : data) {
        std::cin >> i;
    }

    math_control(data);

    std::cout << "[";
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << data[i];
        if (i < data.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
#include <iostream>
#include "../../include/week_3.hpp"

int main() {

    std::size_t size;
    std::cin >> size;

    std::vector<int> data(size);
    for (auto& i : data) {
        std::cin >> i;
    }

    int number;
    std::cin >> number;

    auto output = find_min_subarr(data, number);
    for (auto& i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
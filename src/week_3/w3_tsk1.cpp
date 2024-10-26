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

    std::cout << insertion_index(data, number);
    return 0;
}
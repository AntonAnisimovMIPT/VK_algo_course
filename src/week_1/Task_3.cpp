#include <iostream>
#include "../../include/week_1.hpp"

int main() {
    auto size = 0;
    std::cin >> size;

    std::vector<int> data(size);
    for (auto& i : data) {
        std::cin >> i;
    }

    std::cout << find_max_elem(data);

    return 0;
}
#include <iostream>
#include "../../include/week_1.hpp"

int main() {
    auto size = 0;
    std::cin >> size;

    std::vector<int> data(size);
    for (auto& i : data) {
        std::cin >> i;
    }

    auto target_elem = 0;
    std::cin >> target_elem;

    auto output = remove_elements(data, target_elem);

    for (const auto& i : output) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
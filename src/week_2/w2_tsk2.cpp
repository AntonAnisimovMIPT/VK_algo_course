#include <iostream>
#include "../../include/week_2.hpp"

int main() {
    std::size_t size;
    std::cin >> size;

    std::vector<int> data(size);
    for (auto& i : data) {
        std::cin >> i;
    }

    std::cout << containers(data) << std::endl;
    return 0;
}
#include <iostream>
#include "../../include/week_2.hpp"

int main() {

    std::size_t size;
    std::cin >> size;

    std::vector<int> data(size);
    for (auto& i : data) {
        std::cin >> i;
    }

    if (data.empty()) {
        return 0;
    }

    auto output = minPair(data);
    std::cout << output.first << " " << output.second << std::endl;
    return 0;
}
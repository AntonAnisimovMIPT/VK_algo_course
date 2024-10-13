#include <vector>
#include <iostream>

auto find_max_elem(std::vector<int>& input) {
    auto max_elem = input[0];

    for (const auto& i : input) {
        if (i > max_elem) {
            max_elem = i;
        }
    }

    return max_elem;
}

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
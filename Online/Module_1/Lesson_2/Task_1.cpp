#include <vector>
#include <iostream>

auto counter(const std::vector<int>& arr, int element) {
    auto result = 0;
    for (const auto& i : arr) {
        if (i != element) {
            ++result;
        }
    }

    return result;
}

int main() {
    auto arr_size = 0;
    std::cin >> arr_size;

    std::vector<int> arr(arr_size);
    for (auto& i : arr) {
        std::cin >> i;
    }

    auto element = 0;
    std::cin >> element;

    std::cout << counter(arr, element) << std::endl;

    return 0;
}
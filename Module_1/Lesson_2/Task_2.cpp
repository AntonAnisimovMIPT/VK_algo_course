#include <vector>
#include <iostream>

auto zero_mover(std::vector<int>& arr) {
    auto non_zero_index = 0;

    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] != 0) {
            std::swap(arr[non_zero_index], arr[i]);
            ++non_zero_index;
        }
    }

    return arr;
}

int main() {
    auto arr_size = 0;
    std::cin >> arr_size;

    std::vector<int> arr(arr_size);
    for (auto& i : arr) {
        std::cin >> i;
    }

    zero_mover(arr);

    for (const auto& i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
#include <vector>
#include <iostream>

auto remove_elements(std::vector<int>& input, int target) {
    std::vector<int> result(input.size());
    auto result_idx = 0;

    for (const auto& i : input) {
        if (i != target) {
            result[result_idx] = i;
            ++result_idx;
        }
    }
    result.resize(result_idx);

    return result;
}

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
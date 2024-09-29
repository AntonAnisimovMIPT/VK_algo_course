#include <iostream>
#include <vector>

void evenSorting(std::vector<int>& vec) {
    auto even_idx = 0;

    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 == 0) {
            std::swap(vec[i], vec[even_idx]);
            even_idx++;
        }
    }
}

int main() {
    auto vec_size = 0;
    std::cin >> vec_size;

    std::vector<int> vec(vec_size);
    for (auto& i : vec) {
        std::cin >> i;
    }

    evenSorting(vec);

    for (const auto& i : vec) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
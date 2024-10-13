#include <iostream>
#include <vector>

auto insertion_sort(std::vector<int>& vec) {
    for (size_t i = 1; i < vec.size(); i++) {
        auto comp = vec[i];
        auto j = i;
        while (j > 0 && vec[j - 1] > comp) {
            vec[j] = vec[j - 1];
            --j;
        }
        vec[j] = comp;
    }

    return vec;
}

int main() {
    auto vec_size = 0;
    std::cin >> vec_size;

    std::vector<int> vec(vec_size);
    for (auto& i : vec) {
        std::cin >> i;
    }

    insertion_sort(vec);

    for (const auto& i : vec) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
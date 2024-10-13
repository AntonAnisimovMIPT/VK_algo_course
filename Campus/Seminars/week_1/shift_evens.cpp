#include <vector>

void shift_evens(std::vector<int>& vec) {
    auto even_idx = 0;

    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 == 0) {
            std::swap(vec[i], vec[even_idx]);
            even_idx++;
        }
    }
}
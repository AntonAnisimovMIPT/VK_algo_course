#include <vector>

int insertion_index(const std::vector<int>& arr, const int number) {

    auto left = 0;
    auto right = arr.size() - 1;

    while (left <= right) {
        auto middle = left + (right - left) / 2;

        if (arr[middle] == number) {
            return middle;
        }

        if (arr[middle] < number) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return left;
}

std::vector<int> find_min_subarr(const std::vector<int>& arr, const int number) {
    if (arr.empty()) return {-1, -1};

    int left = 0;
    int right = 1;

    while (right < arr.size() && arr[right] < number) {
        left = right;
        right *= 2;
    }

    right = std::min(right, static_cast<int>(arr.size() - 1));

    return {left, right};
}
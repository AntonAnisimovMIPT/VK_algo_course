#include <vector>

std::vector<int> merge_sorted(std::vector<int>& first, std::vector<int>& second) {
    std::vector<int> result;

    auto pt_1 = first.size() - second.size() - 1;
    auto pt_2 = second.size() - 1;
    auto pt_3 = first.size() - 1;

    while (pt_2 >= 0) {
        if (pt_1 >= 0) {
            if (first[pt_1] < second[pt_2]) {
                first[pt_3] = second[pt_2];
                pt_3--;
                pt_2--;
            } else {
                first[pt_3] = first[pt_1];
                pt_3--;
                pt_1--;
            }
        }
    }

    return result;
}
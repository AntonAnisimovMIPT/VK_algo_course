#include <vector>

void reverseVec(std::vector<int>& inp_vec, int left, int right) {
    while (left < right) {
        std::swap(inp_vec[left], inp_vec[right]);
        left++;
        right--;
    }
}

void solution(std::vector<int>& inp_vec, int n) {
    reverseVec(inp_vec, 0, inp_vec.size() - 1);
    reverseVec(inp_vec, 0, inp_vec.size() - 1 - n);
    reverseVec(inp_vec, inp_vec.size() - 1 - n, inp_vec.size() - 1);
}
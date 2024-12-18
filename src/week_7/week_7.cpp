#include "../../include/week_7.hpp"

std::vector<int> mergeKSortedArrays(const std::vector<std::vector<int>>& arrays) {
    using Element = std::tuple<int, int, int>; // {значение, индекс массива, индекс в массиве}
    std::priority_queue<Element, std::vector<Element>, std::greater<Element>> minHeap;

    for (int i = 0; i < arrays.size(); ++i) {
        if (!arrays[i].empty()) {
            minHeap.emplace(arrays[i][0], i, 0);
        }
    }

    std::vector<int> result;

    // Извлекаем минимальный элемент из кучи и добавляем в результат
    while (!minHeap.empty()) {
        auto [value, arrayIndex, elementIndex] = minHeap.top();
        minHeap.pop();
        result.push_back(value);

        // Если в текущем массиве есть ещё элементы, добавляем следующий в кучу
        if (elementIndex + 1 < arrays[arrayIndex].size()) {
            minHeap.emplace(arrays[arrayIndex][elementIndex + 1], arrayIndex, elementIndex + 1);
        }
    }

    return result;
}
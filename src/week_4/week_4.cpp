#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <set>

std::vector<int> shell_sort(const std::vector<int>& input) {
    std::vector<int> arr = input;
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    return arr;
}

int feed_animals(const std::vector<int>& animals, const std::vector<int>& food) {
    if (animals.empty() || food.empty()) {
        return 0;
    }

    std::vector<int> sorted_animals = animals;
    std::vector<int> sorted_food = food;

    std::sort(sorted_animals.begin(), sorted_animals.end());
    std::sort(sorted_food.begin(), sorted_food.end());

    auto counter = 0;

    for (size_t i = 0; i < sorted_food.size(); i++) {
        if (sorted_food[i] >= sorted_animals[counter]) {
            ++counter;
        }

        if (counter == sorted_animals.size()) {
            break;
        }
    }

    return counter;
}

std::set<int> two_sum(const std::vector<int>& arr, const int target) {
    std::unordered_map<int, int> storage;

    for (size_t i = 0; i < arr.size(); i++) {
        storage[arr[i]] = i;

        auto needed_value = target - arr[i];
        auto find_it = storage.find(needed_value);

        if (find_it != storage.end()) {
            return {arr[i], needed_value};
        }
    }

    return {-1};
}

std::vector<std::vector<std::string>> anagram(const std::vector<std::string>& input) {
    std::unordered_map<std::string, std::vector<std::string>> storage;

    for (const auto& word : input) {
        auto sorted_word = word;
        std::sort(sorted_word.begin(), sorted_word.end());

        storage[sorted_word].push_back(word);
    }

    std::vector<std::vector<std::string>> result;
    for (const auto& entry : storage) {
        result.push_back(entry.second);
    }

    return result;
}
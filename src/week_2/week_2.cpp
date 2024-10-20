#include <list>
#include "../../include/week_2.hpp"

bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    auto slow = head;
    auto fast = head->next;

    while (slow != fast) {
        if (fast == nullptr || fast->next == nullptr) {
            return false;
        }

        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}

ListNode* reverseLinkedList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* cur = head;

    while (cur != nullptr) {
        auto next = cur->next;
        cur->next = prev; /// процесс переворачивания указателей
        prev = cur;       ///
        cur = next;       // для перехода на следующий узел
    }

    head = prev; // не забыть
    return head;
}

ListNode* middleNode(ListNode* head) {
    auto slow = head;
    auto fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* removeElements(ListNode* head, int val) {

    ListNode* dummy = new ListNode();
    dummy->next = head;

    ListNode* prev = dummy;
    ListNode* cur = head;

    while (cur != nullptr) {
        if (cur->val == val) {
            prev->next = cur->next;
        } else {
            prev = cur;
        }
        cur = cur->next;
    }

    ListNode* new_head = dummy->next;
    delete dummy;
    return new_head;
}

std::pair<int, int> minPair(const std::vector<int>& input) {

    if (input.size() < 2) {
        return {0, 0};
    }

    auto tmp_abs = std::abs(input[0] - input[1]);
    std::pair<int, int> result({input[0], input[1]});

    for (size_t i = 1; i < input.size(); i++) {
        if (std::abs(input[i - 1] - input[i]) < tmp_abs) {
            tmp_abs = std::abs(input[i - 1] - input[i]);
            result.first = input[i - 1];
            result.second = input[i];
        }
    }

    return result;
}

int containers(const std::vector<int>& input) {

    std::vector<int> stack;

    for (const auto& i : input) {
        if (i % 2 == 0) {
            stack.push_back(i);
        }
    }

    if (stack.empty()) {
        return -1;
    }

    return stack.back();
}

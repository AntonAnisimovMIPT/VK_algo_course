#ifndef WEEK_2_HPP
#define WEEK_2_HPP

#include <vector>
#include <utility>
#include <cmath>

struct ListNode {
    int val;
    ListNode* next;

    ListNode()
        : val(0), next(nullptr) {}

    ListNode(int x)
        : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head);
ListNode* reverseLinkedList(ListNode* head);
ListNode* middleNode(ListNode* head);
ListNode* removeElements(ListNode* head, const int val);

std::pair<int, int> minPair(const std::vector<int>& input);
int containers(const std::vector<int>& input);

#endif
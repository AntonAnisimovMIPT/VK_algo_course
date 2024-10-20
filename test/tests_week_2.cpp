#include <gtest/gtest.h>
#include "../include/week_2.hpp"

TEST(hasCycle, TrivialCases) {
    ListNode* node1 = new ListNode(1);

    ASSERT_EQ(false, hasCycle(nullptr));
    ASSERT_EQ(false, hasCycle(node1));

    delete node1;
}

TEST(hasCycle, NoCycle) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    ASSERT_EQ(false, hasCycle(node1));

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(hasCycle, RoundCycle) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node1;

    ASSERT_EQ(true, hasCycle(node1));

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(hasCycle, SubCycle) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node3;

    ASSERT_EQ(true, hasCycle(node1));

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(reverseLinkedList, nullptrCase) {
    ListNode* node1 = nullptr;

    ASSERT_EQ(nullptr, reverseLinkedList(nullptr));
}

TEST(reverseLinkedList, TrivialCase) {
    ListNode* node1 = new ListNode(1);

    ASSERT_EQ(node1, reverseLinkedList(node1));

    delete node1;
}

TEST(reverseLinkedList, StandartCase) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    ListNode* newHead = reverseLinkedList(node1);

    ASSERT_EQ(newHead, node5);

    ASSERT_EQ(node5->next, node4);
    ASSERT_EQ(node4->next, node3);
    ASSERT_EQ(node3->next, node2);
    ASSERT_EQ(node2->next, node1);
    ASSERT_EQ(node1->next, nullptr);

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(middleNode, nullptrCase) {
    ListNode* node1 = nullptr;

    ASSERT_EQ(nullptr, middleNode(nullptr));
}

TEST(middleNode, TrivialCase) {
    ListNode* node1 = new ListNode(1);

    ASSERT_EQ(node1, middleNode(node1));

    delete node1;
}

TEST(middleNode, evenCase) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    ASSERT_EQ(node3, middleNode(node1));

    delete node1;
    delete node2;
    delete node3;
    delete node4;
}

TEST(middleNode, oddCase) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    ASSERT_EQ(node3, middleNode(node1));

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(removeElements, firstElement) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);

    node1->next = node2;
    node2->next = node3;

    auto new_head = removeElements(node1, 1);

    ASSERT_EQ(node2, new_head);
    ASSERT_EQ(node3, new_head->next);

    delete node1;
    delete node2;
    delete node3;
}

TEST(removeElements, oneElement) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    auto new_head = removeElements(node1, 3);

    ASSERT_EQ(node1, new_head);
    ASSERT_EQ(node2, new_head->next);
    ASSERT_EQ(node4, new_head->next->next);
    ASSERT_EQ(node5, new_head->next->next->next);

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(removeElements, moreElemnts) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(3);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    auto new_head = removeElements(node1, 3);

    ASSERT_EQ(node1, new_head);
    ASSERT_EQ(node2, new_head->next);
    ASSERT_EQ(node5, new_head->next->next);

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(removeElements, noneElements) {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    auto new_head = removeElements(node1, 10);

    ASSERT_EQ(node1, new_head);
    ASSERT_EQ(node2, new_head->next);
    ASSERT_EQ(node3, new_head->next->next);
    ASSERT_EQ(node4, new_head->next->next->next);
    ASSERT_EQ(node5, new_head->next->next->next->next);

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(minPair, Basic_1) {
    std::vector<int> input({1, 3, 4, 11});
    auto valid_output = std::make_pair(3, 4);

    ASSERT_EQ(valid_output, minPair(input));
}

TEST(minPair, Basic_2) {
    std::vector<int> input({});
    auto valid_output = std::make_pair(0, 0);

    ASSERT_EQ(valid_output, minPair(input));
}

TEST(containers, Basic_1) {
    std::vector<int> input({7, 3, 4, 1, 10, 11, 12, 19, 21});
    auto valid_output = 12;

    ASSERT_EQ(valid_output, containers(input));
}

TEST(containers, Basic_2) {
    std::vector<int> input({1, 2, 4, 0, 11});
    auto valid_output = 0;

    ASSERT_EQ(valid_output, containers(input));
}

TEST(containers, Basic_3) {
    std::vector<int> input({8, 8, 8, 8});
    auto valid_output = 8;

    ASSERT_EQ(valid_output, containers(input));
}

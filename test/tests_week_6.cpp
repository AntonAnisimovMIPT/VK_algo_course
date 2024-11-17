#include <gtest/gtest.h>
#include "../include/week_6.hpp"

TEST(find_min_depth, Basic_1) {
    TreeNode* root = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(20);
    TreeNode* node4 = new TreeNode(3);
    TreeNode* node5 = new TreeNode(4);

    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node4->left = node5;

    ASSERT_EQ(find_min_depth(root), 2);

    delete root;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
}

TEST(find_min_depth, Basic_2) {
    TreeNode* root = new TreeNode(16);
    TreeNode* node2 = new TreeNode(10);
    TreeNode* node3 = new TreeNode(22);
    TreeNode* node4 = new TreeNode(6);
    TreeNode* node5 = new TreeNode(12);
    TreeNode* node6 = new TreeNode(18);

    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;

    ASSERT_EQ(find_min_depth(root), 2);

    delete root;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete node6;
}

TEST(find_min_depth, Basic_3) {
    TreeNode* root = new TreeNode(16);
    TreeNode* node2 = new TreeNode(10);
    TreeNode* node3 = new TreeNode(22);
    // TreeNode* node4 = new TreeNode(6);
    TreeNode* node5 = new TreeNode(12);
    TreeNode* node6 = new TreeNode(18);

    root->left = node2;
    root->right = node3;
    // node2->left = node4;
    node2->right = node5;
    node3->left = node6;

    ASSERT_EQ(find_min_depth(root), 2);

    delete root;
    delete node2;
    delete node3;
    // delete node4;
    delete node5;
    delete node6;
}

TEST(find_min_depth, Basic_4) {
    TreeNode* root = new TreeNode(16);
    TreeNode* node2 = new TreeNode(10);
    TreeNode* node3 = new TreeNode(22);
    TreeNode* node4 = new TreeNode(6);
    TreeNode* node5 = new TreeNode(12);
    TreeNode* node6 = new TreeNode(18);
    TreeNode* node7 = new TreeNode(33);

    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;

    ASSERT_EQ(find_min_depth(root), 3);

    delete root;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete node6;
    delete node7;
}
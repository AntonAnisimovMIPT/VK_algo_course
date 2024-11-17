#ifndef WEEK_1_HPP
#define WEEK_1_HPP

#include <iostream>
#include <queue>
#include <vector>
#include <limits>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int v)
        : value(v), left(nullptr), right(nullptr) {}
};

struct TreeNode;
TreeNode* build_binary_tree(const std::vector<int>& arr);
int find_min_depth(TreeNode* root);

void tree_print_helper(const std::vector<int>& arr);

#endif
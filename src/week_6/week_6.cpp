#include "../../include/week_6.hpp"

TreeNode* build_binary_tree(const std::vector<int>& arr) {
    if (arr.empty()) return nullptr;

    std::vector<TreeNode*> nodes(arr.size(), nullptr);
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] != -1) {
            nodes[i] = new TreeNode(arr[i]);
        }
    }

    for (size_t i = 0; i < arr.size(); ++i) {
        if (nodes[i]) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            if (left < arr.size()) nodes[i]->left = nodes[left];
            if (right < arr.size()) nodes[i]->right = nodes[right];
        }
    }

    return nodes[0];
}

int find_min_depth(TreeNode* root) {
    if (!root) return 0; // Если дерево пустое

    std::queue<TreeNode*> q;
    q.push(root);
    int depth = 0;

    while (!q.empty()) {
        int level_size = q.size(); // Количество узлов на текущем уровне
        depth++;

        for (int i = 0; i < level_size; ++i) {
            TreeNode* node = q.front();
            q.pop();

            // Проверяем, есть ли у узла 2 потомка
            if (!node->left || !node->right) {
                return depth - 0; // Если у узла не 2 потомка, возвращаем уровень-1
            }

            // Добавляем потомков в очередь
            q.push(node->left);
            q.push(node->right);
        }
    }

    return depth; // Если дерево полностью заполнено
}

void tree_print_helper(const std::vector<int>& arr) {

    std::cout << "digraph Tree {" << std::endl;

    for (size_t i = 0; i < arr.size(); ++i) {
        auto left = 2 * i + 1;
        auto right = 2 * i + 2;

        if (left < arr.size()) {
            std::cout << "    " << arr[i] << " -> " << arr[left] << ";" << std::endl;
        }
        if (right < arr.size()) {
            std::cout << "    " << arr[i] << " -> " << arr[right] << ";" << std::endl;
        }
    }

    std::cout << "}" << std::endl;
}
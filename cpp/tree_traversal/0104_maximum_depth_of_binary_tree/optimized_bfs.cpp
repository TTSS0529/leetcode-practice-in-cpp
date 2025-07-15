#include "maximum_depth_of_binary_tree.hpp"

int Solution::maxDepth(TreeNode* root) {
    if (!root) {
        return 0;
    }
    queue<TreeNode *> que;
    que.push(root);
    int res = 0;
    while (!que.empty()) {
        for (size_t i = que.size(); i > 0; --i) {
            TreeNode    *tmp = que.front();
            que.pop();
            if (tmp->left) {
                que.push(tmp->left);
            }
            if (tmp->right) {
                que.push(tmp->right);
            }
        }
        ++res;
    }
    return res;
}
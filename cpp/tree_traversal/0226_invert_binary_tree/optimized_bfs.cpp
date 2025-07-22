#include "invert_binary_tree.hpp"

TreeNode* Solution::invertTree(TreeNode* root) {
    if (!root) {
        return nullptr;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode    *curr = q.front();
        q.pop();
        TreeNode    *tmp = curr->left;
        curr->left = curr->right;
        curr->right = tmp;
        if (curr->left) {
            q.push(curr->left);
        }
        if (curr->right) {
            q.push(curr->right);
        }
    }
    return root;
}
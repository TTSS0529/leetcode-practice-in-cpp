#include "balanced_binary_tree.hpp"

bool Solution::isBalanced(TreeNode* root) {
    return checkDepth(root) != -1;
}

int    Solution::checkDepth(TreeNode *root) {
    if (!root) {
        return 0;
    }
    int left = checkDepth(root->left);
    if (left == -1) {
        return -1;
    }
    int right = checkDepth(root->right);
    if (right == -1) {
        return -1;
    }
    return (abs(left - right) < 2 ? max(left, right) + 1 : -1);
}
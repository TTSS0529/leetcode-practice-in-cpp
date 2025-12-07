#include "diameter_of_binary_tree.hpp"

int Solution::diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;
    helper(root, diameter);
    return diameter;
}

int Solution::helper(TreeNode *root, int& diameter) {
    if (!root) return 0;
    int left = helper(root->left, diameter), right = helper(root->right, diameter);
    diameter = max(left + right, diameter);
    return max(left, right) + 1;
}
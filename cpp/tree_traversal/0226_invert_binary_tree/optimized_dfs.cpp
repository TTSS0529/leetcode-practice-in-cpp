#include "invert_binary_tree.hpp"

TreeNode* Solution::invertTree(TreeNode* root) {
    if (!root) {
        return nullptr;
    }
    TreeNode    *tmp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(tmp);
    return root;
}
#include "maximum_depth_of_binary_tree.hpp"

int Solution::maxDepth(TreeNode* root) {
    if (!root) {
        return 0;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}
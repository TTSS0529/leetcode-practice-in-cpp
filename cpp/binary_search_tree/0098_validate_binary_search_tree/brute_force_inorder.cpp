#include "validate_binary_search_tree.hpp"

bool Solution::isValidBST(TreeNode* root) {
    bool    state = true;
    TreeNode    *prev = nullptr;
    inOrder(root, prev, state);
    return state;
}

void    Solution::inOrder(TreeNode *root, TreeNode *&prev, bool& state) {
    if (!root || !state) return;
    inOrder(root->left, prev, state);
    if (prev && prev->val >= root->val) {
        state = false;
        return;
    }
    prev = root;
    inOrder(root->right, prev, state);
}
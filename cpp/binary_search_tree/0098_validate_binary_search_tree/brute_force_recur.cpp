#include "validate_binary_search_tree.hpp"

bool Solution::isValidBST(TreeNode* root) {
    bool    state = true;
    recur(root->left, state, INT_MIN - 1LL, root->val);
    recur(root->right, state, root->val, INT_MAX + 1LL);
    return state;
}

void    Solution::recur(TreeNode *node, bool& state,
            long long lower, long long upper) {
    if (!node || !state) return;
    if (node->val <= lower || node->val >= upper) {
        state = false;
        return;
    }
    recur(node->left, state, lower, node->val);
    recur(node->right, state, node->val, upper);
}
#include "kth_smallest_element_in_a_bst.hpp"

int Solution::kthSmallest(TreeNode* root, int k) {
    _k = k;
    dfs(root);
    return _res;
}

void    Solution::dfs(TreeNode* root) {
    if (!root) {
        return ;
    }
    dfs(root->left);
    if (!_k) {
        return ;
    }
    if (!(--_k)) {
        _res = root->val;
    }
    dfs(root->right);
}
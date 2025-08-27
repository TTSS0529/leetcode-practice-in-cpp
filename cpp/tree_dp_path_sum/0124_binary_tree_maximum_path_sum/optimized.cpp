#include "binary_tree_maximum_path_sum.hpp"

int Solution::maxPathSum(TreeNode* root) {
    int res = INT_MIN;
    dfsPathSum(root, res);
    return res;
}

int Solution::dfsPathSum(TreeNode *root, int& res) {
    if (!root) return 0;
    int left = max(0, dfsPathSum(root->left, res));
    int right = max(0, dfsPathSum(root->right, res));
    res = max(res, root->val + left + right);
    return root->val + max(left, right);
}
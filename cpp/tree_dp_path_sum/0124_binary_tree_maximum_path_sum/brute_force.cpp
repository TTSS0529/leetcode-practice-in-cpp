#include "binary_tree_maximum_path_sum.hpp"

int Solution::maxPathSum(TreeNode* root) {
    int res = INT_MIN;
    dfsPathSum(root, res);
    return res;
}

int Solution::dfsPathSum(TreeNode *root, int& res) {
    if (!root) return 0;
    int left = dfsPathSum(root->left, res);
    int right = dfsPathSum(root->right, res);
    int tmp = root->val;
    if (left > 0) tmp += left;
    if (right > 0) tmp += right;
    res = max(res, tmp);
    if (left > 0 && right > 0) return tmp - min(left, right);
    return tmp;
}
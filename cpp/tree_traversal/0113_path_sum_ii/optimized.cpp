#include "path_sum_ii.hpp"

vector<vector<int>> Solution::pathSum(TreeNode* root, int targetSum) {
    findPath(root, targetSum);
    return _res;
}

void    Solution::findPath(TreeNode* root, int sum) {
    if (!root) {
        return ;
    }
    _tmp.push_back(root->val);
    sum -= root->val;
    if (!sum && !root->left && !root->right) {
        _res.push_back(_tmp);
    }
    findPath(root->left, sum);
    findPath(root->right, sum);
    _tmp.pop_back();
}
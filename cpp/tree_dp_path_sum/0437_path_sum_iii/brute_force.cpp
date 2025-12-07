#include "path_sum_iii.hpp"

int Solution::pathSum(TreeNode* root, int targetSum) {
    if (!root) return 0;
    return pathSumWithRoot(root, targetSum) + pathSum(root->left, targetSum)
        + pathSum(root->right, targetSum);
}

long long Solution::pathSumWithRoot(TreeNode *root, long long targetSum) {
    if (!root) return 0;
    long long   count = root->val == targetSum ? 1 : 0;
    count += pathSumWithRoot(root->left, targetSum - root->val);
    count += pathSumWithRoot(root->right, targetSum - root->val);
    return count;
}
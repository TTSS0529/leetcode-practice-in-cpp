#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int pathSum(TreeNode* root, int targetSum);
private:
    long long pathSumWithRoot(TreeNode *root, long long targetSum);
    int helper(TreeNode *node, long long curr, int target,
        unordered_map<long long, int>& map);
};
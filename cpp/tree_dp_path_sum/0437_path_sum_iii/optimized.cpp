#include "path_sum_iii.hpp"

int Solution::pathSum(TreeNode* root, int targetSum) {
    unordered_map<long long, int>   map;
    map[0] = 1;
    return helper(root, 0, targetSum, map);
}

int Solution::helper(TreeNode *node, long long curr, int target,
    unordered_map<long long, int>& map) {
    if (!node) return 0;
    curr += node->val;
    int count = 0;
    if (map.find(curr - target) != map.end()) {
        count += map[curr - target];
    }
    ++map[curr];
    count += helper(node->left, curr, target, map);
    count += helper(node->right, curr, target, map);
    --map[curr];
    return count;
}
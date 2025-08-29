#include "convert_sorted_array_to_binary_search_tree.hpp"

TreeNode* Solution::sortedArrayToBST(vector<int>& nums) {
    return creatBST(nums, 0, nums.size() - 1);
}

TreeNode    *Solution::creatBST(vector<int>& nums, int left, int right) {
    if (left > right) return nullptr;
    int middle = left + (right - left) / 2;
    TreeNode    *node = new TreeNode(nums[middle]);
    node->left = creatBST(nums, left, middle - 1);
    node->right = creatBST(nums, middle + 1, right);
    return node;
}
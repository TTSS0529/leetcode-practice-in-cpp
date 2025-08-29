#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums);
private:
    TreeNode    *creatBST(vector<int>& nums, int left, int right);
};
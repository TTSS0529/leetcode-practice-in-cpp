#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root);
private:
    int helper(TreeNode *root, int& diameter);
};
#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    bool isBalanced(TreeNode* root);
private:
    int    checkDepth(TreeNode *root);
};
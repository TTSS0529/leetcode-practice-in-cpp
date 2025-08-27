#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int maxPathSum(TreeNode* root);
private:
    int dfsPathSum(TreeNode *root, int& res);
};
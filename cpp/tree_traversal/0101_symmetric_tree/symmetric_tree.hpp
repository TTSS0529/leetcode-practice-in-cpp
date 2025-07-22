#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    bool isSymmetric(TreeNode* root);
private:
    bool    dfsCheck(TreeNode *le, TreeNode *ri);
};
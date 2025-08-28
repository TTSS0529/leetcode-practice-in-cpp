#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    bool isValidBST(TreeNode* root);
private:
    // brute_force_inorder
    void    inOrder(TreeNode *root, TreeNode *&prev, bool& state);
    void    recur(TreeNode *node, bool& state,
                long long lower, long long upper);
};
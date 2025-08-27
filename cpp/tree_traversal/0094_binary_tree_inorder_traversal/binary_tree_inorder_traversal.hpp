#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root);
private:
    void    dfsInorder(TreeNode *root, vector<int>& res);
};
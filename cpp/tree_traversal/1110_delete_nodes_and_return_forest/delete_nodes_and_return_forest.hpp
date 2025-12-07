#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete);
private:
    TreeNode    *helper(TreeNode *node, vector<TreeNode*>& forest,
        unordered_set<int>& dict);
};
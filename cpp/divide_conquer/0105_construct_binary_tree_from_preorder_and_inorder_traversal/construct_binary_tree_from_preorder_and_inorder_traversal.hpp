#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
private:
    TreeNode    *recurBuild(int root, int left, int right, vector<int>& preorder,
        vector<int>& dic);
};
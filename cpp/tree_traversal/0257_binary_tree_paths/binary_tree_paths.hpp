#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root);
private:
    void    dfsFind(TreeNode *root, vector<string>& res, string path);
};
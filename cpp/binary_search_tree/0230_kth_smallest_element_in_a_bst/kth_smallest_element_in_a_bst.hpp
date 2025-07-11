#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int kthSmallest(TreeNode* root, int k);
private:
    int _res, _k;
    void    dfs(TreeNode* root);
};
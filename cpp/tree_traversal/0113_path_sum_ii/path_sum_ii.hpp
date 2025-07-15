#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum);
private:
    vector<vector<int>> _res;
    vector<int> _tmp;
    void    findPath(TreeNode* root, int sum);
};
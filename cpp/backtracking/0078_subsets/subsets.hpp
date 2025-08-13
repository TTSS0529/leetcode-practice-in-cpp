#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums);
private:
    // optimized version(backtracking)
    void    backtr(vector<int>& nums, vector<vector<int>>& res,
                vector<int>& path, int curr, int n);
};
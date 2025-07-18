#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
private:
    void    backtr(vector<int>& nums, vector<int>& path, int target,
                    int start, vector<vector<int>>& res);
};
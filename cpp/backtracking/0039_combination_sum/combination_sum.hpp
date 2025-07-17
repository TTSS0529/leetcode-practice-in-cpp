#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target);
private:
    vector<vector<int>> _res;
    vector<int> _path;
    void    backtr(vector<int>& nums, int target, int start);
};
#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums);
private:
    vector<vector<int>> _res;
    // only for optimized version
    void    permuteUsed(vector<int>& nums, vector<bool>& used, vector<int>& path);
    void    permuteSwap(vector<int>& nums, int start);
};
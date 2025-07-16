#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums);
private:
    vector<vector<int>> _res;
    // for brute_force version
    void    permutUsed(vector<int>& nums, vector<bool>& used, vector<int>& path);
    // for optimized version
    void    permutSwap(vector<int>& nums, int place);
};
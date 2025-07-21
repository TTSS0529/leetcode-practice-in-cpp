#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k);
private:
    // only for contest version
    void    isLand(vector<vector<int>>& grid, int i, int j, long long& sum);
    void    isLandDfs(vector<vector<int>>& grid, int i, int j, int m, int n, long long& sum);
};
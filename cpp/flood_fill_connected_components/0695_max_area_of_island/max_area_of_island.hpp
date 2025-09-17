#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid);
private:
    void    countArea(vector<vector<int>>& grid, int m, int n,
                int x, int y, int& area, int& count);
};
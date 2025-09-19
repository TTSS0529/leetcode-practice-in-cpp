#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid);
private:
    void    dfsFind(vector<vector<int>>& grid, queue<pair<int, int>>& points,
                int x, int y, int n);
};
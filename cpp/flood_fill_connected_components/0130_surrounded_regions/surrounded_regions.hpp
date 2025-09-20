#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    void solve(vector<vector<char>>& board);
private:
    bool    dfsSearch(vector<vector<char>>& board,
                vector<pair<int, int>>& place, int m, int n, int x, int y);
};
#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights);
private:
    void    reachCheck(vector<vector<int>>& heights,
                vector<vector<bool>>& reach, int x, int y);
    vector<int> _dir{-1, 0, 1, 0, -1};
};
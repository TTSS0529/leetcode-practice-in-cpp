#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board);
private:
    // brute_force version
    void    backtr(vector<vector<char>>& board, vector<unordered_set<int>>& row,
                vector<unordered_set<int>>& col, vector<unordered_set<int>>& block,
                int curr, bool& finish);
    // optimized version
    void    backtr(vector<vector<char>>& board, int (&row)[9], int (&col)[9], int (&block)[9],
            const vector<pair<int, int>>& place, int curr, bool& finish);
};
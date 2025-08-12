#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<string>> solveNQueens(int n);
private:
    void    putQueens(vector<vector<string>>& res, vector<int>& pos, int line, int n);
    bool    validPos(vector<int>& pos, int line, int col);
    // optimized version
    void    putQueens(vector<vector<string>>& res, vector<string>& board,
                vector<bool>& colUsed, vector<bool>& diag1Used,
                vector<bool>& diag2Used, int line, int n);
};
#include "n_queens.hpp"

vector<vector<string>> Solution::solveNQueens(int n) {
    vector<vector<string>>  res;
    vector<int> pos(n, -1);
    putQueens(res, pos, 0, n);
    return res;
}

void    Solution::putQueens(vector<vector<string>>& res, vector<int>& pos, int line, int n) {
    if (line == n) {
        vector<string>  tmp;
        for (int p : pos) {
            string  curr(n, '.');
            curr[p] = 'Q';
            tmp.push_back(curr);
        }
        res.push_back(tmp);
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (validPos(pos, line, i)) {
            pos[line] = i;
            putQueens(res, pos, line + 1, n);
        }
    }
}

bool    Solution::validPos(vector<int>& pos, int line, int col) {
    for (int i = 0; i < line; ++i) {
        if (pos[i] == col) return false;
        if (pos[i] - i == col - line) return false;
        if (pos[i] + i == col + line) return false;
    }
    return true;
}
#include "n_queens.hpp"

vector<vector<string>> Solution::solveNQueens(int n) {
    vector<vector<string>>  res;
    vector<string>  board(n, string(n, '.'));
    vector<bool>    colUsed(n, false);
    vector<bool>    diag1Used(2 * n - 1, false);
    vector<bool>    diag2Used(2 * n - 1, false);
    putQueens(res, board, colUsed, diag1Used, diag2Used, 0, n);
    return res;
}

void    Solution::putQueens(vector<vector<string>>& res, vector<string>& board,
                vector<bool>& colUsed, vector<bool>& diag1Used,
                vector<bool>& diag2Used, int line, int n) {
    if (line >= n) {
        res.push_back(board);
        return;
    }
    for (int col = 0; col < n; ++col) {
        if (colUsed[col] || diag1Used[col - line + n - 1] || diag2Used[col + line]) {
            continue;
        }
        board[line][col] = 'Q';
        colUsed[col] = diag1Used[col - line + n - 1] = diag2Used[col + line] = true;
        putQueens(res, board, colUsed, diag1Used, diag2Used, line + 1, n);
        board[line][col] = '.';
        colUsed[col] = diag1Used[col - line + n - 1] = diag2Used[col + line] = false;
    }
}
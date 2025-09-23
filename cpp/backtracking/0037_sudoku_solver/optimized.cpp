#include "sudoku_solver.hpp"

void Solution::solveSudoku(vector<vector<char>>& board) {
    int row[9], col[9], block[9];
    for (int i = 0; i < 9; ++i) {
        row[i] = col[i] = block[i] = 0x1FF;
    }
    vector<pair<int, int>>  place;
    bool    finish = false;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] == '.') {
                place.emplace_back(i, j);
            } else {
                int d = board[i][j] - '1';
                row[i] &= ~(1 << d);
                col[j] &= ~(1 << d);
                block[i / 3 * 3 + j / 3] &= ~(1 << d);
            }
        }
    }
    backtr(board, row, col, block, place, 0, finish);
}

void    Solution::backtr(vector<vector<char>>& board, int (&row)[9], int (&col)[9], int (&block)[9],
            const vector<pair<int, int>>& place, int curr, bool& finish) {
    if (curr == static_cast<int>(place.size())) {
        finish = true;
        return;
    }
    auto    [x, y] = place[curr];
    int b = x / 3 * 3 + y / 3;
    unsigned int mask = row[x] & col[y] & block[b];
    while (mask) {
        int i = __builtin_ctz(mask);
        board[x][y] = i + '1';
        row[x] ^= 1 << i;
        col[y] ^= 1 << i;
        block[b] ^= 1 << i;
        backtr(board, row, col, block, place, curr + 1, finish);
        if (finish) return;
        board[x][y] = '.';
        row[x] ^= 1 << i;
        col[y] ^= 1 << i;
        block[b] ^= 1 << i;
        mask &= mask - 1;
    }
}
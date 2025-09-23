#include "sudoku_solver.hpp"

void Solution::solveSudoku(vector<vector<char>>& board) {
    vector<unordered_set<int>>  row(9, unordered_set<int>{1,2,3,4,5,6,7,8,9});
    vector<unordered_set<int>>  col(9, unordered_set<int>{1,2,3,4,5,6,7,8,9});
    vector<unordered_set<int>>  block(9, unordered_set<int>{1,2,3,4,5,6,7,8,9});
    int curr = 0;
    bool    finish = false;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] == '.') {
                if (!finish) {
                    curr = i * 9 + j;
                    finish = true;
                }
                continue;
            }
            row[i].erase(board[i][j] - '0');
            col[j].erase(board[i][j] - '0');
            block[i / 3 * 3 + j / 3].erase(board[i][j] - '0');
        }
    }
    finish = false;
    backtr(board, row, col, block, curr, finish);
}

void    Solution::backtr(vector<vector<char>>& board, vector<unordered_set<int>>& row,
            vector<unordered_set<int>>& col, vector<unordered_set<int>>& block,
            int curr, bool& finish) {
    if (finish) return;
    if (curr == 81) {
        finish = true;
        return;
    }
    int x = curr / 9, y = curr % 9, b = x / 3 * 3 + y / 3;
    for (int i = 1; i <= 9; ++i) {
        if (row[x].count(i) && col[y].count(i) && block[b].count(i)) {
            board[x][y] = i + '0';
            row[x].erase(i);
            col[y].erase(i);
            block[b].erase(i);
            int tmp = curr;
            while (++tmp < 81 && board[tmp / 9][tmp % 9] != '.') ;
            backtr(board, row, col, block, tmp, finish);
            if (finish) return;
            board[x][y] = '.';
            row[x].insert(i);
            col[y].insert(i);
            block[b].insert(i);
        }
    }
}
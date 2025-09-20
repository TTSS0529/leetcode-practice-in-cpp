#include "surrounded_regions.hpp"

void Solution::solve(vector<vector<char>>& board) {
    int m = board.size(), n = board[0].size();
    vector<pair<int, int>>  place;
    place.reserve(m * n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'O' && !dfsSearch(board, place, m, n, i, j)) {
                for (const auto& [x, y] : place) {
                    board[x][y] = 'O';
                }
            }
            place.clear();
        }
    }
}

bool    Solution::dfsSearch(vector<vector<char>>& board,
            vector<pair<int, int>>& place, int m, int n, int x, int y) {
    if (x == 0 || x == m - 1 || y == 0 || y == n - 1) {
        if (board[x][y] == 'O') return false;
        else return true;
    }
    if (board[x][y] == 'X') return true;
    board[x][y] = 'X';
    place.emplace_back(x, y);
    return dfsSearch(board, place, m, n, x + 1, y) &&
            dfsSearch(board, place, m, n, x - 1, y) &&
            dfsSearch(board, place, m, n, x, y + 1) &&
            dfsSearch(board, place, m, n, x, y - 1);
}
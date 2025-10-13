#include "minimum_path_sum.hpp"

int Solution::minPathSum(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> path(m, vector<int>(n));
    path[0][0] = grid[0][0];
    for (int i = 1; i < n; ++i) {
        path[0][i] = path[0][i - 1] + grid[0][i];
    }
    for (int i = 1; i < m; ++i) {
        path[i][0] = path[i - 1][0] + grid[i][0];
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            path[i][j] = min(path[i][j - 1], path[i - 1][j]) + grid[i][j];
        }
    }
    return path[m - 1][n - 1];
}
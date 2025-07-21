#include "count_islands_with_total_value_divisible_by_k.hpp"

int Solution::countIslands(vector<vector<int>>& grid, int k) {
    int count = 0;
    int m = grid.size(), n = grid[0].size();
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j]) {
                long long   sum = 0LL;
                isLandDfs(grid, i, j, m, n, sum);
                if (sum % k == 0) {
                    ++count;
                }
            }
        }
    }
    return count;
}

void    Solution::isLandDfs(vector<vector<int>>& grid, int i, int j, int m, int n, long long& sum) {
    if (i < 0 || i >= m || j < 0 || j >= n) {
        return;
    }
    if (!grid[i][j]) {
        return;
    }
    sum += grid[i][j];
    grid[i][j] = 0;
    isLandDfs(grid, i + 1, j, m, n, sum);
    isLandDfs(grid, i - 1, j, m, n, sum);
    isLandDfs(grid, i, j + 1, m, n, sum);
    isLandDfs(grid, i, j - 1, m, n, sum);
}
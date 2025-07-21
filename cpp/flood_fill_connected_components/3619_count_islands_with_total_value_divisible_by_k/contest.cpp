#include "count_islands_with_total_value_divisible_by_k.hpp"

int Solution::countIslands(vector<vector<int>>& grid, int k) {
    int count = 0;
    int m = grid.size(), n = grid[0].size();
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j]) {
                long long   sum = 0LL;
                isLand(grid, i, j, sum);
                if (sum % k == 0) {
                    ++count;
                }
            }
        }
    }
    return count;
}

void    Solution::isLand(vector<vector<int>>& grid, int i, int j, long long& sum) {
    int m = grid.size(), n = grid[0].size();
    if (i < 0 || i >= m || j < 0 || j >= n) {
        return;
    }
    if (!grid[i][j]) {
        return;
    }
    sum += grid[i][j];
    grid[i][j] = 0;
    isLand(grid, i + 1, j, sum);
    isLand(grid, i - 1, j, sum);
    isLand(grid, i, j + 1, sum);
    isLand(grid, i, j - 1, sum);
}
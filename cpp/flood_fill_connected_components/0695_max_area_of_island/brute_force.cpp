#include "max_area_of_island.hpp"

int Solution::maxAreaOfIsland(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    int area = 0;
    for (int x = 0; x < m; ++x) {
        for (int y = 0; y < n; ++y) {
            if (grid[x][y]) {
                int count = 0;
                countArea(grid, m, n, x, y, area, count);
                area = max(area, count);
            }
        }
    }
    return area;
}

void    Solution::countArea(vector<vector<int>>& grid, int m, int n,
            int x, int y, int& area, int& count) {
    if (x < 0 || x >= m || y < 0 || y >= n || !grid[x][y]) return;
    grid[x][y] = 0;
    ++count;
    countArea(grid, m, n, x + 1, y, area, count);
    countArea(grid, m, n, x - 1, y, area, count);
    countArea(grid, m, n, x, y + 1, area, count);
    countArea(grid, m, n, x, y - 1, area, count);
}
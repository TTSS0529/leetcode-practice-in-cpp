#include "shortest_bridge.hpp"

int Solution::shortestBridge(vector<vector<int>>& grid) {
    int n = grid.size();
    bool    is_find = false;
    queue<pair<int, int>>   points;
    for (int i = 0; i < n; ++i) {
        if (is_find) break;
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                dfsFind(grid, points, i, j, n);
                is_find = true;
                break;
            }
        }
    }
    int res = 0;
    while (!points.empty()) {
        int size = points.size();
        ++res;
        while (size-- > 0) {
            auto [x, y] = points.front();
            points.pop();
            grid[x][y] = 2;
            for (auto [i, j] : vector<pair<int, int>>{{-1, 0}, {1, 0}, {0, 1}, {0, -1}}) {
                int nx = x + i, ny = y + j;
                if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                    if (grid[nx][ny] == 2) continue;
                    else if (grid[nx][ny] == 1) return res;
                    grid[nx][ny] = 2;
                    points.emplace(nx, ny);
                }
            }
        }
    }
    return 0;
}

void    Solution::dfsFind(vector<vector<int>>& grid, queue<pair<int, int>>& points,
            int x, int y, int n) {
    if (x < 0 || x >= n || y < 0 || y >= n || grid[x][y] == 2) return;
    if (grid[x][y] == 0) {
        points.emplace(x, y);
        return;
    }
    grid[x][y] = 2;
    dfsFind(grid, points, x + 1, y, n);
    dfsFind(grid, points, x - 1, y, n);
    dfsFind(grid, points, x, y + 1, n);
    dfsFind(grid, points, x, y - 1, n);
}
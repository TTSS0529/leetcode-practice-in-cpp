#include "count_islands_with_total_value_divisible_by_k.hpp"

int Solution::countIslands(vector<vector<int>>& grid, int k) {
    int m = grid.size(), n = grid[0].size();
    int res = 0;
    int dir[4][2] = {
        {-1, 0}, {1, 0}, {0, -1}, {0, 1}
    };
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j]) {
                long long   s = 0LL;
                queue<pair<int, int>>   que;
                que.push({i, j});
                s += grid[i][j];
                grid[i][j] = 0;
                while (!que.empty()) {
                    auto    [x, y] = que.front();
                    que.pop();
                    for (auto& d : dir) {
                        int nx = x + d[0], ny = y + d[1];
                        if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny]) {
                            que.push({nx, ny});
                            s += grid[nx][ny];
                            grid[nx][ny] = 0;
                        }
                    }
                }
                if (s % k == 0) {
                    ++res;
                }
            }
        }
    }
    return res;
}

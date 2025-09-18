#include "pacific_atlantic_water_flow.hpp"

vector<vector<int>> Solution::pacificAtlantic(vector<vector<int>>& heights) {
    int m = heights.size(), n = heights[0].size();
    vector<vector<bool>>    reach_p(m, vector<bool>(n, false));
    vector<vector<bool>>    reach_a(m, vector<bool>(n, false));
    for (int i = 0; i < m; ++i) {
        reachCheck(heights, reach_p, i, 0);
        reachCheck(heights, reach_a, i, n - 1);
    }
    for (int i = 0; i < n; ++i) {
        reachCheck(heights, reach_p, 0, i);
        reachCheck(heights, reach_a, m - 1, i);
    }
    vector<vector<int>> res;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (reach_p[i][j] && reach_a[i][j]) {
                res.push_back(vector<int>{i, j});
            }
        }
    }
    return res;
}

void    Solution::reachCheck(vector<vector<int>>& heights,
            vector<vector<bool>>& reach, int x, int y) {
    if (reach[x][y]) return;
    reach[x][y] = true;
    int m = heights.size(), n = heights[0].size();
    for (int i = 0; i < 4; ++i) {
        int nx = x + _dir[i], ny = y + _dir[i + 1];
        if (nx >= 0 && nx < m && ny >= 0 && ny < n
            && heights[x][y] <= heights[nx][ny]) {
                reachCheck(heights, reach, nx, ny);
        }
    }
}
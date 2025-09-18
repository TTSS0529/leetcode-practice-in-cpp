# 🌐 Flood Fill / Connected Components

## 🎯 常见场景分类
- **经典岛屿问题**：DFS/BFS 统计连通块大小或数量
- **矩阵边界反向遍历**：从海洋/边界反向 flood fill
- **邻接矩阵连通分量**：省份数量 / 图的连通分量
- **带权或条件限制的 Flood Fill**：岛屿总和整除、特定条件扩展

---

## 📌 模板 1：DFS 经典 Flood Fill（岛屿问题）
```cpp
void dfs(vector<vector<int>>& grid, int x, int y, int& area) {
    int m = grid.size(), n = grid[0].size();
    if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == 0) return;
    grid[x][y] = 0; // 标记已访问
    area++;
    dfs(grid, x+1, y, area);
    dfs(grid, x-1, y, area);
    dfs(grid, x, y+1, area);
    dfs(grid, x, y-1, area);
}
```
- 题目: 0695 Max Area of Island, 0200 Number of Islands

## 📌 模板 2：BFS 版本 Flood Fill
```cpp
void bfs(vector<vector<int>>& grid, int x, int y, int& area) {
    int m = grid.size(), n = grid[0].size();
    queue<pair<int,int>> q;
    q.push({x, y});
    grid[x][y] = 0;
    while (!q.empty()) {
        auto [i, j] = q.front(); q.pop();
        area++;
        for (auto [dx, dy] : vector<pair<int,int>>{{1,0},{-1,0},{0,1},{0,-1}}) {
            int nx = i + dx, ny = j + dy;
            if (nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]==1) {
                grid[nx][ny] = 0;
                q.push({nx, ny});
            }
        }
    }
}
```
- 题目: BFS 解法对比 DFS，更适合大图 / 避免栈溢出

## 📌 模板 3：反向 Flood Fill（从边界开始）
```cpp
void dfs(vector<vector<int>>& heights, int x, int y, vector<vector<bool>>& ocean) {
    int m = heights.size(), n = heights[0].size();
    if (ocean[x][y]) return;
    ocean[x][y] = true;
    for (auto [dx, dy] : vector<pair<int,int>>{{1,0},{-1,0},{0,1},{0,-1}}) {
        int nx = x + dx, ny = y + dy;
        if (nx>=0 && nx<m && ny>=0 && ny<n && heights[nx][ny] >= heights[x][y]) {
            dfs(heights, nx, ny, ocean);
        }
    }
}
```
- 题目: 0417 Pacific Atlantic Water Flow（从海洋反向灌入）

## 📌 模板 4：邻接矩阵连通分量
```cpp
void dfs(vector<vector<int>>& M, int i, vector<bool>& visited) {
    visited[i] = true;
    for (int j = 0; j < M.size(); j++) {
        if (M[i][j] && !visited[j]) {
            dfs(M, j, visited);
        }
    }
}

int findCircleNum(vector<vector<int>>& M) {
    int n = M.size(), count = 0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(M, i, visited);
            count++;
        }
    }
    return count;
}
```
- 题目: 0547 Number of Provinces (Friend Circles)

## 📌 模板 5：带条件限制的 Flood Fill
```cpp
int dfs(vector<vector<int>>& grid, int x, int y, int& sum) {
    int m = grid.size(), n = grid[0].size();
    if (x<0 || x>=m || y<0 || y>=n || grid[x][y]==0) return 0;
    int val = grid[x][y];
    grid[x][y] = 0; // 标记
    sum += val;
    for (auto [dx, dy] : vector<pair<int,int>>{{1,0},{-1,0},{0,1},{0,-1}}) {
        dfs(grid, x+dx, y+dy, sum);
    }
    return sum;
}
```
- 题目: 3619 Count Islands With Total Value Divisible By K（Biweekly 161 Q2）

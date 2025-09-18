# 🌀 Backtracking

## 🎯 常见场景分类
- 组合型问题：从 n 个元素中选出 k 个组合
- 排列型问题：生成全排列，可能包含重复元素
- 子集 / 子序列型问题：生成所有子集或符合条件的子序列
- 路径 / 树形搜索型：在棋盘或矩阵中搜索路径
- 括号 / 配对型问题：生成合法括号序列
- N 皇后 / 棋盘约束型：放置棋子满足约束
- 分割 / 回文判断型：字符串分割满足特定条件

## 📌 模板 1：组合型（允许重复 / 不允许重复）
```cpp
void backtrack(vector<int>& candidates, int target, vector<int>& path, int start) {
    if (target == 0) {
        ans.push_back(path);
        return;
    }
    for (int i = start; i < candidates.size(); i++) {
        if (candidates[i] > target) break; // prune
        if (i > start && candidates[i] == candidates[i-1]) continue; // skip duplicates
        path.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], path, /*reuse?*/ i);
        path.pop_back();
    }
}
```
- 题目: 39 Combination Sum, 40 Combination Sum II, 77 Combinations

## 📌 模板 2：排列型（可能有重复元素）
```cpp
void backtrack(vector<int>& nums, vector<int>& path, vector<bool>& used) {
    if (path.size() == nums.size()) {
        ans.push_back(path);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;
        if (i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue; // skip duplicates
        used[i] = true;
        path.push_back(nums[i]);
        backtrack(nums, path, used);
        path.pop_back();
        used[i] = false;
    }
}
```
- 题目: 46 Permutations, 47 Permutations II

## 📌 模板 3：子集 / 子序列型
```cpp
void backtrack(vector<int>& nums, vector<int>& path, int start) {
    ans.push_back(path); // record path for subsets
    for (int i = start; i < nums.size(); i++) {
        path.push_back(nums[i]);
        backtrack(nums, path, i+1);
        path.pop_back();
    }
}
```
- 题目: 78 Subsets

## 📌 模板 4：括号 / 配对型
```cpp
void backtrack(string& path, int left, int right, int n) {
    if (path.size() == 2*n) {
        ans.push_back(path);
        return;
    }
    if (left < n) {
        path.push_back('(');
        backtrack(path, left+1, right, n);
        path.pop_back();
    }
    if (right < left) {
        path.push_back(')');
        backtrack(path, left, right+1, n);
        path.pop_back();
    }
}
```
- 题目: 22 Generate Parentheses

## 📌 模板 5：棋盘 / 路径搜索型
```cpp
void dfs(vector<vector<char>>& board, int x, int y) {
    if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] != 'X') return;
    board[x][y] = 'V'; // mark visited
    for (auto [dx, dy] : dirs) {
        dfs(board, x+dx, y+dy);
    }
}
```
- 题目: 79 Word Search, 51 N Queens

## 📌 模板 6：字符串分割 / 回文判断型
```cpp
bool isPalindrome(string& s, int l, int r) {
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

void backtrack(string& s, vector<string>& path, int start) {
    if (start == s.size()) {
        ans.push_back(path);
        return;
    }
    for (int i = start; i < s.size(); i++) {
        if (!isPalindrome(s, start, i)) continue;
        path.push_back(s.substr(start, i-start+1));
        backtrack(s, path, i+1);
        path.pop_back();
    }
}
```
- 题目: 131 Palindrome Partitioning

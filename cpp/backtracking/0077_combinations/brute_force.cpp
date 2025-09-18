#include "combinations.hpp"

vector<vector<int>> Solution::combine(int n, int k) {
    vector<vector<int>> res;
    vector<int> path;
    path.reserve(k);
    backtr(res, path, 1, n, k);
    return res;
}

void    Solution::backtr(vector<vector<int>>& res, vector<int>& path, int curr, int n, int k) {
    if (static_cast<int>(path.size()) == k) {
        res.push_back(path);
        return;
    }
    for (int i = curr; i <= n; ++i) {
        path.push_back(i);
        backtr(res, path, i + 1, n, k);
        path.pop_back();
    }
}
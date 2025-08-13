#include "palindrome_partitioning.hpp"

vector<vector<string>> Solution::partition(string s) {
    int n = s.size();
    vector<vector<string>>  res;
    res.reserve(1 << (n - 1));
    vector<string>  path;
    path.reserve(n);
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    for (int i = n - 1; i >= 0; --i) {
        for (int j = i; j < n; ++j) {
            dp[i][j] = (s[i] == s[j]) && (j - i < 2 || dp[i + 1][j - 1]);
        }
    }
    backtr(res, path, dp, s, 0, n);
    return res;
}

void    Solution::backtr(vector<vector<string>>& res, vector<string>& path,
            vector<vector<bool>>& dp, string& s, int start, int n) {
    if (start >= n) {
        res.push_back(path);
        return;
    }
    for (int end = start; end < n; ++end) {
        if (dp[start][end]) {
            path.push_back(s.substr(start, end - start + 1));
            backtr(res, path, dp, s, end + 1, n);
            path.pop_back();
        }
    }
}
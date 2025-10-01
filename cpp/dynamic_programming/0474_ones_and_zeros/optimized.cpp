#include "ones_and_zeros.hpp"

int Solution::findMaxForm(vector<string>& strs, int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (const string& str : strs) {
        int n_zero = count(str.begin(), str.end(), '0');
        int n_one = str.size() - n_zero;
        for (int i = m; i >= n_zero; --i) {
            for (int j = n; j >= n_one; --j) {
                dp[i][j] = max(dp[i][j], dp[i - n_zero][j - n_one] + 1);
            }
        }
    }
    return dp[m][n];
}
#include "decode_ways.hpp"

int Solution::numDecodings(string s) {
    int n = s.size();
    if (!n) return 0;
    int prev = s[0] - '0';
    if (!prev) return 0;
    if (n == 1) return 1;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        int curr = s[i - 1] - '0';
        if (curr == 0 && (prev == 0 || prev > 2)) return 0;
        if (curr >= 1 && curr <= 9) {
            dp[i] += dp[i - 1];
        }
        if (prev == 1 || (prev == 2 && curr < 7)) {
            dp[i] += dp[i - 2];
        }
        prev = curr;
    }
    return dp[n];
}
#include "ugly_number_ii.hpp"

int Solution::nthUglyNumber(int n) {
    int i2 = 0, i3 = 0, i5 = 0;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i) {
        int a = dp[i2] * 2, b = dp[i3] * 3, c = dp[i5] * 5;
        dp[i] = min(min(a, b), c);
        if (a == dp[i]) ++i2;
        if (b == dp[i]) ++i3;
        if (c == dp[i]) ++i5;
    }
    return dp[n - 1];
}
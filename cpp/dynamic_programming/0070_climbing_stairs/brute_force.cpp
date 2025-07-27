#include "climbing_stairs.hpp"

int Solution::climbStairs(int n) {
    long long dp0 = 1, dp1 = 1, dpi;
    for (int i = 0; i < n; ++i) {
        dpi = dp0 + dp1;
        dp0 = dp1;
        dp1 = dpi;
    }
    return dp0;
}
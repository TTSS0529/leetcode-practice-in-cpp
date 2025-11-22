#include "super_ugly_number.hpp"

int Solution::nthSuperUglyNumber(int n, vector<int>& primes) {
    int len = primes.size();
    vector<int> index(len);
    vector<int> dp(n);
    dp[0] = 1;
    vector<long long>   chose(primes.begin(), primes.end());
    for (int i = 1; i < n; ++i) {
        auto    it = min_element(chose.begin(), chose.end());
        if (it != chose.end()) {
            int curr = *it;
            dp[i] = curr;
            for (int i = 0; i < len; ++i) {
                if (chose[i] == curr) {
                    chose[i] = 1LL * primes[i] * dp[++index[i]];
                }
            }
        }
    }
    return dp[n - 1];
}
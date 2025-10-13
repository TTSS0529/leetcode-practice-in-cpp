#include "coin_change.hpp"

int Solution::coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, INT_MAX - 1);
    dp[0] = 0;
    for (int j = 1; j <= amount; ++j) {
        for (const int& coin : coins) {
            if (j >= coin) {
                dp[j] = min(dp[j], dp[j - coin] + 1);
            }
        }
    }
    return dp[amount] == INT_MAX - 1 ? -1 : dp[amount];
}
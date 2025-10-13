#include "target_sum.hpp"

int Solution::findTargetSumWays(vector<int>& nums, int target) {
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum + target < 0 || (sum + target) % 2) return 0;
    int sum_p = (sum + target) / 2;
    vector<int> dp(sum_p + 1);
    dp[0] = 1;
    for (const int& num : nums) {
        for (int j = sum_p; j >= num; --j) {
            dp[j] += dp[j - num];
        }
    }
    return dp[sum_p];
}
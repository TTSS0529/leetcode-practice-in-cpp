#include "longest_increasing_subsequence.hpp"

int Solution::lengthOfLIS(vector<int>& nums) {
    vector<int> dp;
    dp.reserve(nums.size());
    int res = 0;
    for (int n : nums) {
        int left = 0, right = res - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (n > dp[middle]) left = middle + 1;
            else right = middle - 1;
        }
        dp[left] = n;
        if (right == res - 1) ++res;
    }
    return res;
}
#include "minimum_removals_to_balance_array.hpp"

int Solution::minRemoval(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int right = 0, m = nums.size(), res = INT_MAX;
    for (int left = 0; left < m; ++left) {
        while (right < m && nums[right] <= 1LL * k * nums[left]) {
            ++right;
        }
        res = min(res, m - (right - left));
    }
    return res;
}
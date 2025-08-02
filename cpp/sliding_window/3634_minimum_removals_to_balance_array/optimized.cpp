#include "minimum_removals_to_balance_array.hpp"

int Solution::minRemoval(vector<int>& nums, int k) {
    int len = nums.size();
    if (len == 1) return 0;
    sort(nums.begin(), nums.end());
    int subLen = 0, left = 0;
    for (int right = 0; right < len; ++right) {
        while (nums[right] > 1LL * k * nums[left]) {
            ++left;
        }
        subLen = max(subLen, right - left + 1);
    }
    return len - subLen;
}
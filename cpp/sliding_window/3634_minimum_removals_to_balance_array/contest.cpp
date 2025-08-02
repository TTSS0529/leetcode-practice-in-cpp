#include "minimum_removals_to_balance_array.hpp"

int Solution::minRemoval(vector<int>& nums, int k) {
    int len = nums.size();
    if (len == 1) return 0;
    int res = INT_MAX;
    sort(nums.begin(), nums.end());
    if (nums.back() / static_cast<double>(k) <= nums[0]) return 0;
    for (int i = len - 1; i >= 0; --i) {
        int target;
        if (nums[i] % k == 0) {
            target = nums[i] / k;
        } else {
            target = nums[i] / k + 1;
        }
        if (target <= nums[0]) {
            res = min(res, len - i - 1);
            break;
        }
        int left = 0, right = i, middle;
        while (left < right) {
            middle = left + (right - left) / 2;
            if (nums[middle] >= target) right = middle;
            else if (nums[middle] < target) left = middle + 1;
        }
        res = min(res, left + (len - i - 1));
    }
    return res;
}
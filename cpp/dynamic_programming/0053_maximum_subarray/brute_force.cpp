#include "maximum_subarray.hpp"

int Solution::maxSubArray(vector<int>& nums) {
    int len = nums.size();
    int max =nums[0], pre = nums[0];
    for (int i = 1; i < len; ++i) {
        pre = pre > 0 ? pre + nums[i] : nums[i];
        max = pre > max ? pre : max;
    }
    return max;
}
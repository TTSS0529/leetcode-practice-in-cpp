#include "house_robber_ii.hpp"

int Solution::rob(vector<int>& nums) {
    if (nums.size() == 1) return nums[0];
    int pre = 0, curr = 0, tmp;
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        tmp = curr;
        curr = max(pre + nums[i], curr);
        pre = tmp;
    }
    int sumWithBegin = curr;
    pre = curr = 0;
    for (size_t i = 1; i < nums.size(); ++i) {
        tmp = curr;
        curr = max(pre + nums[i], curr);
        pre = tmp;
    }
    return max(sumWithBegin, curr);
}
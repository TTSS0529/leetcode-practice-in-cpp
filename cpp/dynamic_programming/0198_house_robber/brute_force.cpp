#include "house_robber.hpp"

int Solution::rob(vector<int>& nums) {
    int pre = 0, curr = 0, tmp;
    for (size_t i = 0; i < nums.size(); ++i) {
        tmp = curr;
        curr = max(curr, pre + nums[i]);
        pre = tmp;
    }
    return curr;
}
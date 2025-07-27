#include "running_sum_of_1d_array.hpp"

vector<int> Solution::runningSum(vector<int>& nums) {
    int len = nums.size();
    vector<int> res;
    res.reserve(len);
    for (int i = 0; i < len; ++i) {
        if (!res.empty()) {
            res.push_back(nums[i] + res.back());
        } else {
            res.push_back(nums[i]);
        }
    }
    return res;
}
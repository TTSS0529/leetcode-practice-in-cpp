#include "permutations.hpp"

vector<vector<int>> Solution::permute(vector<int>& nums) {
    permutSwap(nums, 0);
    return _res;
}

void    Solution::permutSwap(vector<int>& nums, int place) {
    int len = nums.size();
    if (place == len - 1) {
        _res.push_back(nums);
        return;
    }
    for (int i = place; i < len; ++i) {
        swap(nums[i], nums[place]);
        permutSwap(nums, place + 1);
        swap(nums[i], nums[place]);
    }
}
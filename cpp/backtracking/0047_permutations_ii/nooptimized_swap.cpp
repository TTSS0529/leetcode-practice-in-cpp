#include "permutations_ii.hpp"

vector<vector<int>> Solution::permuteUnique(vector<int>& nums) {
    permuteSwap(nums, 0);
    return _res;
}

void    Solution::permuteSwap(vector<int>& nums, int start) {
    int len = nums.size();
    if (start == len - 1) {
        _res.push_back(nums);
        return;
    }
    unordered_set<int>  multi;
    for (int i = start; i < len; ++i) {
        if (multi.count(nums[i])) {
            continue;
        }
        multi.insert(nums[i]);
        swap(nums[i], nums[start]);
        permuteSwap(nums, start + 1);
        swap(nums[i], nums[start]);
    }
}
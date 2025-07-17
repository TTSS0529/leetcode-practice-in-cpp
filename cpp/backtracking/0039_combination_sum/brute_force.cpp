#include "combination_sum.hpp"

vector<vector<int>> Solution::combinationSum(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    backtr(candidates, target, 0);
    return _res;
}

void    Solution::backtr(vector<int>& nums, int target, int start) {
    int len = nums.size();
    if (!target) {
        _res.push_back(_path);
        return;
    }
    for (int i = start; i < len; ++i) {
        if (target - nums[i] < 0) {
            break;
        }
        _path.push_back(nums[i]);
        backtr(nums, target - nums[i], i);
        _path.pop_back();
    }
}
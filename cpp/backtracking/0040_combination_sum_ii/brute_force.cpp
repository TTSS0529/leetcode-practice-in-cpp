#include "combination_sum_ii.hpp"

vector<vector<int>> Solution::combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> path;
    sort(candidates.begin(), candidates.end());
    backtr(candidates, path, target, 0, res);
    return res;
}

void    Solution::backtr(vector<int>& nums, vector<int>& path, int target,
                int start, vector<vector<int>>& res) {
    int len = nums.size();
    if (!target) {
        res.push_back(path);
        return;
    }
    for (int i = start; i < len; ++i) {
        if (target - nums[i] < 0) {
            break;
        }
        if (i > start && nums[i] == nums[i - 1]) {
            continue;
        }
        path.push_back(nums[i]);
        backtr(nums, path, target - nums[i], i + 1, res);
        path.pop_back();
    }
}
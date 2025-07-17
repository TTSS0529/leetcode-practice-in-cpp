#include "permutations_ii.hpp"

vector<vector<int>> Solution::permuteUnique(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<bool>    used(nums.size(), false);
    vector<int>     path;
    path.reserve(nums.size());
    permuteUsed(nums, used, path);
    return _res;
}

void    Solution::permuteUsed(vector<int>& nums, vector<bool>& used, vector<int>& path) {
    if (path.size() == nums.size()) {
        _res.push_back(path);
        return;
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        if (used[i]) {
            continue;
        }
        if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
            continue;
        }
        path.push_back(nums[i]);
        used[i] = true;
        permuteUsed(nums, used, path);
        path.pop_back();
        used[i] = false;
    }
}
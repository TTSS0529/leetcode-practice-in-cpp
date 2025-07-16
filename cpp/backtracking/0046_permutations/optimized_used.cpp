#include "permutations.hpp"

vector<vector<int>> Solution::permute(vector<int>& nums) {
    vector<bool>    used(nums.size(), false);
    vector<int>     path;
    path.reserve(nums.size());
    permutUsed(nums, used, path);
    return _res;
}

void    Solution::permutUsed(vector<int>& nums, vector<bool>& used, vector<int>& path) {
    if (path.size() == nums.size()) {
        _res.push_back(path);
        return ;
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        if (used[i]) {
            continue;
        }
        path.push_back(nums[i]);
        used[i] = true;
        permutUsed(nums, used, path);
        path.pop_back();
        used[i] = false;
    }
}
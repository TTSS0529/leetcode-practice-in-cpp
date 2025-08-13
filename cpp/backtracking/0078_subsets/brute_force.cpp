#include "subsets.hpp"

vector<vector<int>> Solution::subsets(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    res.reserve(1 << n);
    vector<int> path;
    path.reserve(n);
    backtr(nums, res, path, 0, n);
    return res;
}

void    Solution::backtr(vector<int>& nums, vector<vector<int>>& res,
            vector<int>& path, int curr, int n) {
    res.push_back(path);
    for (int i = curr; i < n; ++i) {
        path.push_back(nums[i]);
        backtr(nums, res, path, i + 1, n);
        path.pop_back();
    }
}
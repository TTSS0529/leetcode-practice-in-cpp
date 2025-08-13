#include "subsets.hpp"

vector<vector<int>> Solution::subsets(vector<int>& nums) {
    int n = nums.size(), all = 1 << n;
    vector<vector<int>> res;
    res.reserve(all);
    for (int i = 0; i < all; ++i) {
        vector<int> tmp;
        tmp.reserve(n);
        for (int j = 0; j < n; ++j) {
            if (i & 1 << j) {
                tmp.push_back(nums[j]);
            }
        }
        res.push_back(move(tmp));
    }
    return res;
}
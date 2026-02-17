#include "shuffle_the_array.hpp"

vector<int> Solution::shuffle(vector<int>& nums, int n) {
    vector<int> ans;
    ans.reserve(n * 2);
    for (size_t i = 0; i < n; ++i) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    return ans;
}
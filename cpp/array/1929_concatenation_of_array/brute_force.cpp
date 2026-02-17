#include "concatenation_of_array.hpp"

vector<int> Solution::getConcatenation(vector<int>& nums) {
    size_t  n = nums.size();
    vector<int> ans(n * 2);
    for (size_t i = 0; i < n; ++i) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
}
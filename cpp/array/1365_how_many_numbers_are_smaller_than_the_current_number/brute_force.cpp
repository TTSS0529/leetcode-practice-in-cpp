#include "how_many_numbers_are_smaller_than_the_current_number.hpp"

vector<int> Solution::smallerNumbersThanCurrent(vector<int>& nums) {
    int n = nums.size();
    vector<int> count(101), ans(n);
    for (const int& num : nums) {
        ++count[num];
    }
    for (int i = 0; i < n; ++i) {
        ans[i] = accumulate(count.begin(), count.begin() + nums[i], 0);
    }
    return ans;
}
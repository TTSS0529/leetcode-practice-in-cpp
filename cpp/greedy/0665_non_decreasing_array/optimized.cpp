#include "non_decreasing_array.hpp"

bool Solution::checkPossibility(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return true;
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (nums[i] > nums[i + 1]) {
            if (++count > 1) return false;
            if (i > 0 && nums[i - 1] > nums[i + 1]) {
                nums[i + 1] = nums[i];
            } else {
                nums[i] = nums[i + 1];
            }
        }
    }
    return true;
}
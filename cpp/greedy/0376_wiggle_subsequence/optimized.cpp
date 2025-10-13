#include "wiggle_subsequence.hpp"

int Solution::wiggleMaxLength(vector<int>& nums) {
    int up = 1, down = 1;
    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i - 1]) {
            up = down + 1;
        } else if (nums[i] < nums[i - 1]) {
            down = up + 1;
        }
    }
    return max(up, down);
}
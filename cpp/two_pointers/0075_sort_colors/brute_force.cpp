#include "sort_colors.hpp"

void Solution::sortColors(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    for (int i = 0; i <= right;) {
        if (nums[i] == 0) {
            swap(nums[left++], nums[i++]);
        } else if (nums[i] == 2) {
            swap(nums[right--], nums[i]);
        } else {
            ++i;
        }
    }
}
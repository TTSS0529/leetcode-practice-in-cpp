#include "find_minimum_in_rotated_sorted_array_ii.hpp"

int Solution::findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int middle = left + (right - left) / 2;
        if (nums[middle] > nums[right]) {
            left = middle + 1;
        } else if (nums[middle] < nums[right]) {
            right = middle;
        } else {
            --right;
        }
    }
    return nums[left];
}
#include "single_element_in_a_sorted_array.hpp"

int Solution::singleNonDuplicate(vector<int>& nums) {
    int len = nums.size();
    int left = 0, right = len - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (middle % 2) {
            if (nums[middle] == nums[middle - 1]) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        } else {
            if (middle == len - 1 || nums[middle] != nums[middle + 1]) {
                right = middle - 1;
            } else {
                left = middle + 2;
            }
        }
    }
    return nums[left];
}
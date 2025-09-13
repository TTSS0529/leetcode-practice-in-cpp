#include "single_element_in_a_sorted_array.hpp"

int Solution::singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int middle = left + (right - left) / 2;
        if (middle % 2) --middle;
        if (nums[middle] == nums[middle + 1]) {
            left = middle + 2;
        } else {
            right = middle;
        }
    }
    return nums[left];
}
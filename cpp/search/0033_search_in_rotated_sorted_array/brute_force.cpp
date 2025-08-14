#include "search_in_rotated_sorted_array.hpp"

int Solution::search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target) return middle;
        else if (nums[middle] < target && nums[middle] > nums[right]) left = middle + 1;
        else if (nums[middle] > target && nums[middle] < nums[right]) right = middle - 1;
        else if (nums[middle] < target && nums[middle] < nums[right]) {
            if (target > nums[right]) right = middle - 1;
            else left = middle + 1;
        } else {
            if (target < nums[left]) left = middle + 1;
            else right = middle - 1;
        }
    }
    return -1;
}
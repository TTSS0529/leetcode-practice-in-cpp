#include "search_insert_position.hpp"

int Solution::searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size();
    while (left < right) {
        int middle = left + (right - left) / 2;
        if (nums[middle] < target) left = middle + 1;
        else right = middle;
    }
    return left;
}
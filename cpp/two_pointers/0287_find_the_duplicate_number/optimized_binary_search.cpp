#include "find_the_duplicate_number.hpp"

int Solution::findDuplicate(vector<int>& nums) {
    int left = 1, right = nums.size() - 1;
    while (left < right) {
        int middle = left + (right - left) / 2;
        int count = 0;
        for (auto n : nums) {
            if (n <= middle) {
                ++count;
            }
        }
        if (count > middle) {
            right = middle;
        } else {
            left = middle + 1;
        }
    }
    return left;
}
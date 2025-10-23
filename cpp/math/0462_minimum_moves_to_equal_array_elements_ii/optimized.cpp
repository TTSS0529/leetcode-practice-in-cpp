#include "minimum_moves_to_equal_array_elements_ii.hpp"

int Solution::minMoves2(vector<int>& nums) {
    int mid = nums.size() / 2;
    nth_element(nums.begin(), nums.begin() + mid, nums.end());
    int end = nums[mid];
    long long   res = 0LL;
    for (const int num : nums) {
        res += llabs(num - end);
    }
    return static_cast<int>(res);
}
#include "find_pivot_index.hpp"

int Solution::pivotIndex(vector<int>& nums) {
    long long   sum = 0LL;
    for (auto n : nums) {
        sum += n;
    }
    long long   leftSum = 0LL;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (leftSum == sum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}
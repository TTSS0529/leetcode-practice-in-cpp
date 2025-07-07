#include "find_pivot_index.hpp"

int Solution::pivotIndex(vector<int>& nums) {
    vector<long long>   partSum;
    partSum.reserve(nums.size() + 1);
    long long   sum = 0LL;
    partSum.push_back(0);
    for (auto n : nums) {
        sum += n;
        partSum.push_back(sum);
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        if (partSum[i] == sum - partSum[i] - nums[i]) {
            return i;
        }
    }
    return -1;
}
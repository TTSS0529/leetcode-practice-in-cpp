#include "subarray_sum_equals_k.hpp"

int Solution::subarraySum(vector<int>& nums, int k) {
    int pre_sum = 0, res = 0;
    unordered_map<int, int> map;
    map[0] = 1;
    for (const int& num : nums) {
        pre_sum += num;
        res += map[pre_sum - k];
        ++map[pre_sum];
    }
    return res;
}
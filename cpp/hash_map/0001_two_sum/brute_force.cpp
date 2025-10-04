#include "two_sum.hpp"

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    int m = nums.size();
    for (int i = 0; i < m; ++i) {
        int tmp = target - nums[i];
        if (map.find(tmp) != map.end()) {
            return {map[tmp], i};
        }
        map[nums[i]] = i;
    }
    return {-1, -1};
}
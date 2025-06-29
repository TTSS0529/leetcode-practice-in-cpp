#include "three_sum.hpp"

std::vector<std::vector<int>> Solution::threeSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    size_t  len = nums.size();
    std::vector<std::vector<int>>   result;
    for (size_t k = 0; k < len - 2 && nums[k] <= 0; ++k) {
        if (k > 0 && nums[k] == nums[k - 1]) {
            continue ;
        }
        size_t  i = k + 1;
        size_t  j = len - 1;
        while (i < j) {
            int sum = nums[k] + nums[i] + nums[j];
            if (sum < 0) {
                ++i;
                while (i < j && nums[i] == nums[i - 1]) {
                    ++i;
                }
            } else if (sum > 0) {
                --j;
                while (i < j && nums[j] == nums[j + 1]) {
                    --j;
                }
            } else {
                result.push_back({nums[k], nums[i], nums[j]});
                ++i;
                while (i < j && nums[i] == nums[i - 1]) {
                    ++i;
                }
                --j;
                while (i < j && nums[j] == nums[j + 1]) {
                    --j;
                }
            }
        }
    }
    return result;
}
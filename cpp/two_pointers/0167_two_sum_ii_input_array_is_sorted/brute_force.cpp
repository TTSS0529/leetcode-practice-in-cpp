#include "two_sum_ii_input_array_is_sorted.hpp"

std::vector<int>    Solution::twoSum(std::vector<int>& numbers, int target) {
    size_t  left = 0, right = numbers.size() - 1;
    while (left < right) {
        int sum = numbers[left] + numbers[right];
        if ( sum == target) {
            return {static_cast<int>(left) + 1, static_cast<int>(right) + 1};
        }
        if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }
    return {};
}
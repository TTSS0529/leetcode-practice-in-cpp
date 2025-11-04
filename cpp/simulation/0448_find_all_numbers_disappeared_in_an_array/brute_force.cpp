#include "find_all_numbers_disappeared_in_an_array.hpp"

vector<int> Solution::findDisappearedNumbers(vector<int>& nums) {
    vector<int> res;
    for (const int& num : nums) {
        int pos = abs(num) - 1;
        if (nums[pos] > 0) {
            nums[pos] = -nums[pos];
        }
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0) {
            res.push_back(i + 1);
        }
    }
    return res;
}
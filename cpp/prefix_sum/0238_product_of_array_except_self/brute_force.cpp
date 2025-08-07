#include "product_of_array_except_self.hpp"

vector<int> Solution::productExceptSelf(vector<int>& nums) {
    int len = nums.size();
    vector<int> left(len, 1);
    for (int i = 1; i < len; ++i) {
        left[i] = left[i - 1] * nums[i - 1];
    }
    int right = 1;
    for (int i = len - 2; i >= 0; --i) {
        right = right * nums[i + 1];
        left[i] *= right;
    }
    return left;
}
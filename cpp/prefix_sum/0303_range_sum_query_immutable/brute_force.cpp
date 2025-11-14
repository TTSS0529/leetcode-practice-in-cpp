#include "range_sum_query_immutable.hpp"

NumArray::NumArray(vector<int>& nums) : _pre(nums.size() + 1) {
    partial_sum(nums.begin(), nums.end(), _pre.begin() + 1);
}

int NumArray::sumRange(int left, int right) {
    return _pre[right + 1] - _pre[left];
}
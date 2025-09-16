#include "kth_largest_element_in_an_array.hpp"

int Solution::findKthLargest(vector<int>& nums, int k) {
    srand(time(nullptr));
    return quickSelect(nums, k);
}

int Solution::quickSelect(vector<int>& nums, int k) {
    int pivot = nums[rand() % nums.size()];
    vector<int> small, large, equal;
    for (int n : nums) {
        if (n == pivot) {
            equal.push_back(n);
        } else if (n > pivot) {
            large.push_back(n);
        } else {
            small.push_back(n);
        }
    }
    if (static_cast<size_t>(k) <= large.size()) {
        return quickSelect(large, k);
    } else if (static_cast<size_t>(k) > nums.size() - small.size()) {
        return quickSelect(small, (k + small.size()) - nums.size());
    } else {
        return pivot;
    }
}
#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k);
private:
    int quickSelect(vector<int>& nums, int k);// for optimized_extra
    int quickInplace(vector<int>& nums, int left, int right, int k);
};
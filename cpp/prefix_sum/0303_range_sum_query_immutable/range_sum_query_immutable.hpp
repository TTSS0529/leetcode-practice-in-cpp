#pragma once

#include "../../simple_test.hpp"

class NumArray {
public:
    NumArray(vector<int>& nums);
    
    int sumRange(int left, int right);
private:
    vector<int> _pre;
};
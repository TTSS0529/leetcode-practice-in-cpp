#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    Solution(vector<int>& w);
    int pickIndex();
private:
    vector<int> _sums;
};
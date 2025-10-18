#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    Solution(vector<int>& nums);
    
    vector<int> reset();
    
    vector<int> shuffle();
private:
    vector<int> _origin;
};
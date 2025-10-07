#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int maxProfit(int k, vector<int>& prices);
private:
    int maxProfitUnlimit(vector<int>& prices);
};
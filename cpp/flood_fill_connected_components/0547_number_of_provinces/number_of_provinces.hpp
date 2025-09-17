#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected);
private:
    void    findEachCircle(vector<vector<int>>& isConnected,
                vector<bool>& visited, int i, int n);
};
#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k);
private:
    void    findPath(vector<vector<pair<int, int>>>& graph, long long k,
                vector<int>& pathCost, int& res, int curr);
};
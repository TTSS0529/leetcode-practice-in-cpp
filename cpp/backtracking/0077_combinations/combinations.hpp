#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<int>> combine(int n, int k);
private:
    void    backtr(vector<vector<int>>& res, vector<int>& path, int curr, int n, int k);
};
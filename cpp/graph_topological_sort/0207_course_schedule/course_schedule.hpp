#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites);
private:
    bool    dfs(vector<vector<int>>& graph, vector<int>& state, int curr);
};
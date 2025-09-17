#include "number_of_provinces.hpp"

int Solution::findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected.size(), count = 0;
    vector<bool>    visited(n, false);
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            findEachCircle(isConnected, visited, i, n);
            ++count;
        }
    }
    return count;
}

void    Solution::findEachCircle(vector<vector<int>>& isConnected,
            vector<bool>& visited, int i, int n) {
    visited[i] = true;
    for (int j = 0; j < n; ++j) {
        if (!visited[j] && isConnected[i][j]) {
            findEachCircle(isConnected, visited, j, n);
        }
    }
}
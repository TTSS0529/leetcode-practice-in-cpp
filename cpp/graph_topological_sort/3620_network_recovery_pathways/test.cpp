#include "network_recovery_pathways.hpp"

static void runTest(vector<vector<int>>& edges, vector<bool>& online, long long k) {
    Solution    sol;
    cout << sol.findMaxPathScore(edges, online, k) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> edges1 = {
        {0,1,5},
        {1,3,10},
        {0,2,3},
        {2,3,4}
    };
    vector<bool>    online1 = {true, true, true, true};
    runTest(edges1, online1, 10);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> edges2 = {
        {0,1,7},
        {1,4,5},
        {0,2,6},
        {2,3,6},
        {3,4,2},
        {2,4,6}
    };
    vector<bool>    online2 = {true, true, true, false, true};
    runTest(edges2, online2, 12);

    return 0;
}
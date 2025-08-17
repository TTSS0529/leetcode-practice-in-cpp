#include "minimum_cost_path_with_edge_reversals.hpp"

static void runTest(int n, vector<vector<int>>& edges) {
    Solution    sol;
    cout << sol.minCost(n, edges) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1{
        {0, 1, 3},
        {3, 1, 1},
        {2, 3, 4},
        {0, 2, 2}
    };
    runTest(4, test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test2{
        {0, 2, 1},
        {2, 1, 1},
        {1, 3, 1},
        {2, 3, 3}
    };
    runTest(4, test2);

    return 0;
}
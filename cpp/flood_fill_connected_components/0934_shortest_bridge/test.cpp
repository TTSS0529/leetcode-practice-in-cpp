#include "shortest_bridge.hpp"

static void runTest(vector<vector<int>>& grid) {
    Solution    sol;
    cout << sol.shortestBridge(grid) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{
        {0,1},
        {1,0}
    };
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{
        {0,1,0},
        {0,0,0},
        {0,0,1}
    };
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<vector<int>> test3{
        {1,1,1,1,1},
        {1,0,0,0,1},
        {1,0,1,0,1},
        {1,0,0,0,1},
        {1,1,1,1,1}
    };
    runTest(test3);

    return 0;
}
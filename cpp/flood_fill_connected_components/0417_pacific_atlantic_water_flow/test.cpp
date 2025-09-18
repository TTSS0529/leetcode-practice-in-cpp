#include "pacific_atlantic_water_flow.hpp"

static void runTest(vector<vector<int>>& heights) {
    Solution    sol;
    vector<vector<int>> res = sol.pacificAtlantic(heights);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{
        {1,2,2,3,5},
        {3,2,3,4,4},
        {2,4,5,3,1},
        {6,7,1,4,5},
        {5,1,1,2,4}
    };
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{
        {1}
    };
    runTest(test2);

    return 0;
}
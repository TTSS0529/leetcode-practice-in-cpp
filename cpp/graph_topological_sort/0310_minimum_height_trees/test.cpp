#include "minimum_height_trees.hpp"

static void runTest(int n, vector<vector<int>>& edges) {
    Solution    sol;
    vector<int> res = sol.findMinHeightTrees(n, edges);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{
        {1,0},{1,2},{1,3}
    };
    runTest(4, test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{
        {3,0},{3,1},{3,2},{3,4},{5,4}
    };
    runTest(6, test2);

    return 0;
}
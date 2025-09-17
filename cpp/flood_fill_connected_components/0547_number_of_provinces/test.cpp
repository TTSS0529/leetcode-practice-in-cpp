#include "number_of_provinces.hpp"

static void runTest(vector<vector<int>>& isConnected) {
    Solution    sol;
    cout << sol.findCircleNum(isConnected) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{{1,1,0},{1,1,0},{0,0,1}};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{{1,0,0},{0,1,0},{0,0,1}};
    runTest(test2);

    return 0;
}
#include "01_matrix.hpp"

static void runTest(vector<vector<int>>& mat) {
    Solution    sol;
    vector<vector<int>> res = sol.updateMatrix(mat);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<int>> test1{{0,0,0},{0,1,0},{0,0,0}};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<int>> test2{{0,0,0},{0,1,0},{1,1,1}};
    runTest(test2);

    return 0;
}
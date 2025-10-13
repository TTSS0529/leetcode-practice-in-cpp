#include "pascals_triangle.hpp"

static void runTest(int numRows) {
    Solution    sol;
    vector<vector<int>> res = sol.generate(numRows);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest(5);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(1);

    return 0;
}
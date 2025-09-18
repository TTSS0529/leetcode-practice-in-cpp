#include "combinations.hpp"

static void runTest(int n, int k) {
    Solution    sol;
    vector<vector<int>> res = sol.combine(n, k);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest(4, 2);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(1, 1);

    return 0;
}
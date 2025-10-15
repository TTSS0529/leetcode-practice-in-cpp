#include "different_ways_to_add_parentheses.hpp"

static void runTest(string expression) {
    Solution    sol;
    vector<int> res = sol.diffWaysToCompute(expression);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("2-1-1");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("2*3-4*5");

    return 0;
}
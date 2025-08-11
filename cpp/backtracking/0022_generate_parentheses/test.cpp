#include "generate_parentheses.hpp"

static void runTest(int n) {
    Solution    sol;
    vector<string>  res = sol.generateParenthesis(n);
    printVec(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(1);

    return 0;
}
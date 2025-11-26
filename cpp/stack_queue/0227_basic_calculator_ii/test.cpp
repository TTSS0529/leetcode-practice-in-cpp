#include "basic_calculator_ii.hpp"

static void runTest(string s) {
    Solution    sol;
    cout << sol.calculate(s) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("3+2*2");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(" 3/2 ");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(" 3+5 / 2 ");

    return 0;
}
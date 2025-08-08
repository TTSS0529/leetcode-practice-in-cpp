#include "integer_break.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.integerBreak(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(10);

    return 0;
}
#include "factorial_trailing_zeroes.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.trailingZeroes(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(5);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(0);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest(30);

    return 0;
}
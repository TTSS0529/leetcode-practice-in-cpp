#include "sqrt_x.hpp"

static void runTest(int x) {
    Solution    sol;
    cout << sol.mySqrt(x) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest(4);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(8);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest(0);

    std::cout << ">>>>>> example 4 <<<<<<" << std::endl;
    runTest(1);

    std::cout << ">>>>>> example 5 <<<<<<" << std::endl;
    runTest(2147483647);

    return 0;
}
#include "pow_x_n.hpp"

static void runTest(double x, int n) {
    Solution    sol;
    cout << sol.myPow(x, n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(2.00000, 10);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(2.10000, 3);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(2.00000, -2);

    return 0;
}
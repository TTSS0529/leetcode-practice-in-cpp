#include "ugly_number_ii.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.nthUglyNumber(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(10);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(1);

    return 0;
}
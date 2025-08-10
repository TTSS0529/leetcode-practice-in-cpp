#include "nth_digit.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.findNthDigit(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(11);

    return 0;
}
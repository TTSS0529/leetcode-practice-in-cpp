#include "power_of_four.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << (sol.isPowerOfFour(n) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(16);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(5);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(1);

    return 0;
}
#include "power_of_three.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << (sol.isPowerOfThree(n) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(27);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(0);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(-1);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest(21);

    return 0;
}
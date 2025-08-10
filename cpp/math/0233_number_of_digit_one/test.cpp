#include "number_of_digit_one.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.countDigitOne(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(13);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(0);

    return 0;
}
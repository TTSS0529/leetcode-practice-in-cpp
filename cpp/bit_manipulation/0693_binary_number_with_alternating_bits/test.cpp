#include "binary_number_with_alternating_bits.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << (sol.hasAlternatingBits(n) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(5);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(7);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(11);

    return 0;
}
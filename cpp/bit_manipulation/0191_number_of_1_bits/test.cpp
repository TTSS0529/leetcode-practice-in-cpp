#include "number_of_1_bits.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.hammingWeight(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(11);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(128);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(2147483645);

    return 0;
}
#include "reverse_bits.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.reverseBits(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(43261596);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(2147483644);

    return 0;
}
#include "hexadecimal_and_hexatrigesimal_conversion.hpp"

static void runTest(int n) {
    Solution sol;
    cout << "Input: n = " << n << endl;
    cout << "Output: ";
    cout << sol.concatHex36(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(13);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(36);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(393);

    return 0;
}
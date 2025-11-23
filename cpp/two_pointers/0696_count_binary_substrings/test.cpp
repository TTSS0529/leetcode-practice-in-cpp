#include "count_binary_substrings.hpp"

static void runTest(string s) {
    Solution    sol;
    cout << sol.countBinarySubstrings(s) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("00110011");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("10101");

    return 0;
}
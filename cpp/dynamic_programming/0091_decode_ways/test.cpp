#include "decode_ways.hpp"

static void runTest(string s) {
    Solution    sol;
    cout << sol.numDecodings(s) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest("12");

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest("226");

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest("06");

    std::cout << ">>>>>> example 4 <<<<<<" << std::endl;
    runTest("0");

    std::cout << ">>>>>> example 5 <<<<<<" << std::endl;
    runTest("2101");

    return 0;
}
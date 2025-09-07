#include "minimum_window_substring.hpp"

static void runTest(string s, string t) {
    Solution    sol;
    cout << sol.minWindow(s, t) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest("ADOBECODEBANC", "ABC");

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest("a", "a");

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest("a", "aa");

    return 0;
}
#include "regular_expression_matching.hpp"

static void runTest(string s, string p) {
    Solution    sol;
    cout << (sol.isMatch(s, p) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("aa", "a");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("aa", "a*");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("ab", ".*");

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest("aab", "c*a*b");

    return 0;
}
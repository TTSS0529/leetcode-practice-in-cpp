#include "longest_palindromic_substring.hpp"

static void runTest(string s) {
    Solution    sol;
    cout << sol.longestPalindrome(s) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("babad");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("cbbd");

    return 0;
}
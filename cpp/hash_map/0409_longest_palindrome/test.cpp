#include "longest_palindrome.hpp"

static void runTest(std::string s) {
    Solution    sol;
    std::cout << sol.longestPalindrome(s) << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("abccccdd");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("a");

    return 0;
}
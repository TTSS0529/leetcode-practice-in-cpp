#include "valid_palindrome_ii.hpp"

static void runTest(string s) {
    Solution    sol;
    cout << (sol.validPalindrome(s) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest("aba");

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest("abca");

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest("abc");

    std::cout << ">>>>>> example 4 <<<<<<" << std::endl;
    runTest("cbbcc");

    std::cout << ">>>>>> example 5 <<<<<<" << std::endl;
    runTest("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga");

    return 0;
}
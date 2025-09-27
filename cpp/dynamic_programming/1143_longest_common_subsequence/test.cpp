#include "longest_common_subsequence.hpp"

static void runTest(string text1, string text2) {
    Solution    sol;
    cout << sol.longestCommonSubsequence(text1, text2) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest("abcde", "ace");

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest("abc", "abc");

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest("abc", "def");

    return 0;
}
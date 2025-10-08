#include "delete_operation_for_two_strings.hpp"

static void runTest(string word1, string word2) {
    Solution    sol;
    cout << sol.minDistance(word1, word2) << endl;
}

int main() {
    // std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    // runTest("sea", "eat");

    // std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    // runTest("leetcode", "etco");

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest("a", "b");

    return 0;
}
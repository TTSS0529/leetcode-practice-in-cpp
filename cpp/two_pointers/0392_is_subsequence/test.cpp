#include "is_subsequence.hpp"

static void runTest(std::string s, std::string t) {
    Solution    sol;
    std::cout << (sol.isSubsequence(s, t) ? "true" : "false") << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("abc", "ahbgdc");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("axc", "ahbgdc");

    return 0;
}
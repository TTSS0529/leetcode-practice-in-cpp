#include "palindromic_substrings.hpp"

static void runTest(string s) {
    Solution    sol;
    cout << sol.countSubstrings(s) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("abc");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("aaa");

    return 0;
}
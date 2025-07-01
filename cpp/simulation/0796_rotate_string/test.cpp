#include "rotate_string.hpp"

static void runTest(std::string s, std::string goal) {
    Solution    sol;
    std::cout << (sol.rotateString(s, goal) ? "true" : "false") << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("abcde", "cdeab");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("abcde", "abced");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("defdefdefabcabc", "defdefabcabcdef");

    return 0;
}
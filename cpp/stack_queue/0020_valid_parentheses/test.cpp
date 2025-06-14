#include "valid_parentheses.hpp"

static void runTest(std::string s) {
    Solution    sol;
    bool    result = sol.isValid(s);
    std::cout << (result ? "true" : "false") << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("()");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("()[]{}");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("(]");

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest("([])");

    return 0;
}
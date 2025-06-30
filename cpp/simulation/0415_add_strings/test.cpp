#include "add_strings.hpp"

static void runTest(std::string num1, std::string num2) {
    Solution    sol;
    std::cout << "\"" << sol.addStrings(num1, num2) << "\"" << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("11", "123");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("456", "77");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("0", "0");

    return 0;
}
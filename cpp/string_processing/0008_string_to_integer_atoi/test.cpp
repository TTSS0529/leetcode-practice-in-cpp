#include "string_to_integer_atoi.hpp"

static void runTest(std::string s) {
    Solution    sol;
    std::cout << "Input: s = " << s << std::endl;
    std::cout << "Output: ";
    std::cout << sol.myAtoi(s) << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("42");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(" -042");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("1337c0d3");

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest("0-1");

    std::cout << ">>>>>>>>>> example 5 <<<<<<<<<<" << std::endl;
    runTest("words and 987");

    std::cout << ">>>>>>>>>> example 6 <<<<<<<<<<" << std::endl;
    runTest("2147483647");

    std::cout << ">>>>>>>>>> example 7 <<<<<<<<<<" << std::endl;
    runTest("2147483648");

    std::cout << ">>>>>>>>>> example 8 <<<<<<<<<<" << std::endl;
    runTest("-2147483648");

    std::cout << ">>>>>>>>>> example 9 <<<<<<<<<<" << std::endl;
    runTest("-2147483649");

    return 0;
}
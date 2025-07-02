#include "zigzag_conversion.hpp"

static void runTest(std::string s, int numRows) {
    Solution    sol;
    std::cout << "\"" << sol.convert(s, numRows) << "\"" << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("PAYPALISHIRING", 3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("PAYPALISHIRING", 4);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("A", 1);
}
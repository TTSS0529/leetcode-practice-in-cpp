#include "add_binary.hpp"

static void runTest(string a, string b) {
    Solution    sol;
    cout << sol.addBinary(a, b) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("11", "1");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("1010", "1011");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("0", "0");

    return 0;
}
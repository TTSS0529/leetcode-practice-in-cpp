#include "decode_string.hpp"

static void runTest(std::string s) {
    Solution    sol;
    std::cout << sol.decodeString(s) << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("3[a]2[bc]");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("3[a2[c]]");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("2[abc]3[cd]ef");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("10[ac2[d]]");

    return 0;
}
#include "isomorphic_strings.hpp"

static void runTest(std::string s, std::string t) {
    Solution    sol;
    std::cout << (sol.isIsomorphic(s, t) ? "true" : "false") << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("egg", "add");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("foo", "bar");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("paper", "title");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("badc", "baba");

    return 0;
}
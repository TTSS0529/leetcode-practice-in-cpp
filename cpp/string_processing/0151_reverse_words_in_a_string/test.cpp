#include "reverse_words_in_a_string.hpp"

static void runTest(std::string s) {
    Solution    sol;
    std::cout << sol.reverseWords(s) << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("the sky is blue");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("  hello world  ");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("a good   enample");

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest("  oneword");

    return 0;
}
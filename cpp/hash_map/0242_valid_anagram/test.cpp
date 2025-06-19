#include "valid_anagram.hpp"

static void runTest(std::string s, std::string t) {
    Solution    sol;
    std::cout << (sol.isAnagram(s, t) ? "true" : "false") << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("anagram", "nagaram");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("rat", "car");

    return 0;
}
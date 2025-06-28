#include "longest_substring_without_repeating_characters.hpp"

static void runTest(std::string s) {
    Solution    sol;
    std::cout << sol.lengthOfLongestSubstring(s) << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("abcabcbb");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("bbbbb");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("pwwkew");

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest("");

    std::cout << ">>>>>>>>>> example 5 <<<<<<<<<<" << std::endl;
    runTest("a");

    std::cout << ">>>>>>>>>> example 6 <<<<<<<<<<" << std::endl;
    runTest("abba");

    return 0;
}
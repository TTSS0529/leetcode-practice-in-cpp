#include "first_unique_character_in_a_string.hpp"

static void runTest(std::string s) {
    Solution    sol;
    std::cout << sol.firstUniqChar(s) << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("leetcode");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("loveleetcode");

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest("aabb");

    return 0;
}
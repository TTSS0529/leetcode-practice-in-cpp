#include "find_the_index_of_the_first_occurrence_in_a_string.hpp"

static void runTest(string haystack, string needle) {
    Solution    sol;
    cout << sol.strStr(haystack, needle) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("sadbutsad", "sad");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("leetcode", "leeto");

    return 0;
}
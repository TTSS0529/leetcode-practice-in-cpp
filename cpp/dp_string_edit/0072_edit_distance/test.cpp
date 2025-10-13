#include "edit_distance.hpp"

static void runTest(string word1, string word2) {
    Solution    sol;
    cout << sol.minDistance(word1, word2) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest("horse", "ros");

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest("intention", "execution");

    return 0;
}
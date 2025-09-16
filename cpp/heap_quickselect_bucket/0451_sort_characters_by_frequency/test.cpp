#include "sort_characters_by_frequency.hpp"

static void runTest(string s) {
    Solution    sol;
    cout << sol.frequencySort(s) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest("tree");

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest("cccaaa");

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest("Aabb");

    return 0;
}
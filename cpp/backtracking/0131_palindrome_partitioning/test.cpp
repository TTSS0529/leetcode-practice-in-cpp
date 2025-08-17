#include "palindrome_partitioning.hpp"

static void runTest(string s) {
    Solution    sol;
    vector<vector<string>>  res = sol.partition(s);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest("aab");

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest("a");

    return 0;
}
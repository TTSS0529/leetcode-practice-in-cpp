#include "ones_and_zeros.hpp"

static void runTest(vector<string>& strs, int m, int n) {
    Solution    sol;
    cout << sol.findMaxForm(strs, m, n) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<string>  test1{"10","0001","111001","1","0"};
    runTest(test1, 5, 3);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<string>  test2{"10","0","1"};
    runTest(test2, 1, 1);

    return 0;
}
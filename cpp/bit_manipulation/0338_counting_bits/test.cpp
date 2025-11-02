#include "counting_bits.hpp"

static void runTest(int n) {
    Solution    sol;
    vector<int> res = sol.countBits(n);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(5);

    return 0;
}
#include "beautiful_array.hpp"

static void runTest(int n) {
    Solution    sol;
    vector<int> res = sol.beautifulArray(n);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(4);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(5);

    return 0;
}
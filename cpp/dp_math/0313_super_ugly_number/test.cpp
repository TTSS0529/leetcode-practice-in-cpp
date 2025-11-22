#include "super_ugly_number.hpp"

static void runTest(int n, vector<int>& primes) {
    Solution    sol;
    cout << sol.nthSuperUglyNumber(n, primes) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{2,7,13,19};
    runTest(12, test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{2,3,5};
    runTest(1, test2);

    return 0;
}
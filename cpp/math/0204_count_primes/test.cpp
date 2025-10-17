#include "count_primes.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.countPrimes(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(10);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(0);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(1);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest(3);
    
    return 0;
}
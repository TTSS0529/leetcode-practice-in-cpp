#include "find_the_least_frequent_digit.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.getLeastFrequentDigit(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(1553322);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(723344511);

    return 0;
}
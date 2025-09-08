#include "sum_of_square_numbers.hpp"

static void runTest(int c) {
    Solution    sol;
    cout << (sol.judgeSquareSum(c) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest(5);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(3);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    runTest(2);

    std::cout << ">>>>>> example 4 <<<<<<" << std::endl;
    runTest(2147483647);

    return 0;
}
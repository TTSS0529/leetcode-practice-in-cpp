#include "perfect_squares.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.numSquares(n) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest(12);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(13);

    return 0;
}
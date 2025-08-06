#include "sum_of_two_integers.hpp"

static void runTest(int a, int b) {
    Solution    sol;
    cout << sol.getSum(a, b) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(1, 2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(2, 3);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(-2, 1);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    runTest(-10, -5);

    return 0;
}
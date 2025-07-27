#include "fibonacci_number.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.fib(n) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(3);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(4);

    return 0;
}
#include "happy_number.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << (sol.isHappy(n) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(19);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(2);

    return 0;
}
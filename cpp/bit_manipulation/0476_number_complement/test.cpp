#include "number_complement.hpp"

static void runTest(int num) {
    Solution    sol;
    cout << sol.findComplement(num) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(5);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(1);

    return 0;
}
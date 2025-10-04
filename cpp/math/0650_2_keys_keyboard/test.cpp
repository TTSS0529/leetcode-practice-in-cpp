#include "2_keys_keyboard.hpp"

static void runTest(int n) {
    Solution    sol;
    cout << sol.minSteps(n) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    runTest(3);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    runTest(1);

    return 0;
}
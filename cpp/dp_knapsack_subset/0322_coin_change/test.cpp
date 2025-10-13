#include "coin_change.hpp"

static void runTest(vector<int>& coins, int amount) {
    Solution    sol;
    cout << sol.coinChange(coins, amount) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1, 2, 5};
    runTest(test1, 11);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{2};
    runTest(test2, 3);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{1};
    runTest(test3, 0);

    return 0;
}
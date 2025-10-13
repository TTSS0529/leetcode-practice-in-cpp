#include "best_time_to_buy_and_sell_stock_with_cooldown.hpp"

static void runTest(vector<int>& prices) {
    Solution    sol;
    cout << sol.maxProfit(prices) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1,2,3,0,2};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{1};
    runTest(test2);

    return 0;
}
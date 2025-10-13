#include "best_time_to_buy_and_sell_stock_with_transaction_fee.hpp"

static void runTest(vector<int>& prices, int fee) {
    Solution    sol;
    cout << sol.maxProfit(prices, fee) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1,3,2,8,4,9};
    runTest(test1, 2);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{1,3,7,5,10,3};
    runTest(test2, 3);

    return 0;
}
#include "best_time_to_buy_and_sell_stock_iv.hpp"

static void runTest(int k, vector<int>& prices) {
    Solution    sol;
    cout << sol.maxProfit(k, prices) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{2, 4, 1};
    runTest(2, test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{3, 2, 6, 5, 0, 3};
    runTest(2, test2);

    return 0;
}
#include "best_time_to_buy_and_sell_stock.hpp"

static void runTest(vector<int>& prices) {
    Solution    sol;
    cout << sol.maxProfit(prices) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {7, 1, 5, 3, 6, 4};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {7, 6, 4, 3, 1};
    runTest(test2);

    return 0;
}
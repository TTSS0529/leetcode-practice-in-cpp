#include "best_time_to_buy_and_sell_stock_iii.hpp"

static void runTest(vector<int>& prices) {
    Solution    sol;
    cout << sol.maxProfit(prices) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{3,3,5,0,0,3,1,4};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{1,2,3,4,5};
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{7,6,4,3,1};
    runTest(test3);

    return 0;
}
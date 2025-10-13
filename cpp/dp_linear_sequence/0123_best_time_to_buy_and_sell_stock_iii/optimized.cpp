#include "best_time_to_buy_and_sell_stock_iii.hpp"

int Solution::maxProfit(vector<int>& prices) {
    int m = prices.size();
    if (m < 2) return 0;
    int dp1 = -prices[0], dp2 = 0, dp3 = -prices[0], dp4 = 0;
    for (const int& price : prices) {
        dp1 = max(dp1, -price);
        dp2 = max(dp2, dp1 + price);
        dp3 = max(dp3, dp2 - price);
        dp4 = max(dp4, dp3 + price);
    }
    return dp4;
}
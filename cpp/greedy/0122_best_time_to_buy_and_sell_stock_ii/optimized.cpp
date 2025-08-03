#include "best_time_to_buy_and_sell_stock_ii.hpp"

int Solution::maxProfit(vector<int>& prices) {
    int res = 0;
    for (size_t i = 1; i < prices.size(); ++i) {
        int profit = prices[i] - prices[i - 1];
        if (profit > 0) res += profit;
    }
    return res;
}
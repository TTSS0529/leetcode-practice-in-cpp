#include "best_time_to_buy_and_sell_stock_iv.hpp"

int Solution::maxProfit(int k, vector<int>& prices) {
    int len = prices.size();
    if (k * 2 >= len) {
        return maxProfitUnlimit(prices);
    }
    vector<int> buy(k + 1, INT_MIN), sell(k + 1);
    for (const int& price : prices) {
        for (int i = 1; i <= k; ++i) {
            buy[i] = max(buy[i], sell[i - 1] - price);
            sell[i] = max(sell[i], buy[i] + price);
        }
    }
    return sell[k];
}

int Solution::maxProfitUnlimit(vector<int>& prices) {
    int len = prices.size(), max_price = 0;
    for (int i = 0; i < len - 1; ++i) {
        int tmp = prices[i + 1] - prices[i];
        if (tmp > 0) {
            max_price += tmp;
        }
    }
    return max_price;
}
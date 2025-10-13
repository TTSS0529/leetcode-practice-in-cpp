#include "best_time_to_buy_and_sell_stock.hpp"

int Solution::maxProfit(vector<int>& prices) {
    int len = prices.size();
    if (len < 2) return 0;
    int preMin = prices[0];
    int res = 0;
    for (int i = 1; i < len; ++i) {
        int diff = prices[i] - preMin;
        if (diff > res) res = diff;
        if (prices[i] < preMin) preMin = prices[i];
    }
    return res;
}
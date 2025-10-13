#include "best_time_to_buy_and_sell_stock_iii.hpp"

int Solution::maxProfit(vector<int>& prices) {
    int m = prices.size();
    if (m < 2) return 0;
    vector<int> left(m), right(m);
    int min_price = prices[0];
    for (int i = 1; i < m; ++i) {
        left[i] = max(left[i - 1], prices[i] - min_price);
        min_price = min(min_price, prices[i]);
    }
    int max_price = prices[m - 1];
    for (int i = m - 2; i >= 0; --i) {
        right[i] = max(right[i + 1], max_price - prices[i]);
        max_price = max(max_price, prices[i]);
    }
    int res = 0;
    for (int i = 0; i < m; ++i) {
        res = max(res, left[i] + right[i]);
    }
    return res;
}
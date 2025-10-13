#include "best_time_to_buy_and_sell_stock_with_transaction_fee.hpp"

int Solution::maxProfit(vector<int>& prices, int fee) {
    int keep = -prices[0], empty = 0, prev_k, prev_e;
    for (size_t i = 1; i < prices.size(); ++i) {
        prev_k = keep;
        prev_e = empty;
        keep = max(prev_e - prices[i], prev_k);
        empty = max(prev_k + prices[i] - fee, prev_e);
    }
    return empty;
}
#include "best_time_to_buy_and_sell_stock_with_cooldown.hpp"

int Solution::maxProfit(vector<int>& prices) {
    int hold = -prices[0], rest = 0, cool = 0;
    for (size_t i = 1; i < prices.size(); ++i) {
        int pre_hold = hold, pre_rest = rest, pre_cool = cool;
        hold = max(pre_hold, pre_rest - prices[i]);
        cool = pre_hold + prices[i];
        rest = max(pre_rest, pre_cool);
    }
    return max(rest, cool);
}
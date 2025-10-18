#include "base_7.hpp"

string Solution::convertToBase7(int num) {
    if (!num) return "0";
    string  res;
    bool    is_neg = false;
    if (num < 0) {
        is_neg = true;
        num = -num;
    }
    while (num) {
        res += num % 7 + '0';
        num /= 7;
    }
    if (is_neg) res += '-';
    reverse(res.begin(), res.end());
    return res;
}
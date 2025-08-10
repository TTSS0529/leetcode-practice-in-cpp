#include "number_of_digit_one.hpp"

int Solution::countDigitOne(int n) {
    int high = n / 10, curr = n % 10, low = 0;
    long long   digit = 1LL;
    int res = 0;
    while (high || curr) {
        if (curr == 0) res += high * digit;
        else if (curr == 1) res += high * digit + low + 1;
        else res += (high + 1) * digit;
        low += curr * digit;
        curr = high % 10;
        high /= 10;
        digit *= 10;
    }
    return res;
}
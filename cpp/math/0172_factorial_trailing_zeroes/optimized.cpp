#include "factorial_trailing_zeroes.hpp"

int Solution::trailingZeroes(int n) {
    int cnt_5 = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        cnt_5 += n / i;
    }
    return cnt_5;
}
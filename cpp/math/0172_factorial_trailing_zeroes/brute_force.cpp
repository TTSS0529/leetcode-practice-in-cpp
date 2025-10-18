#include "factorial_trailing_zeroes.hpp"

int Solution::trailingZeroes(int n) {
    int cnt_5 = 0;
    for (int i = 5; i <= n; i += 5) {
        int tmp = i;
        while (tmp % 5 == 0) {
            ++cnt_5;
            tmp /= 5;
        }
    }
    return cnt_5;
}
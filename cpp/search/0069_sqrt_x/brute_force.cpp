#include "sqrt_x.hpp"

int Solution::mySqrt(int x) {
    int left = 0, right = x;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        long long   pow_tmp = 1LL * middle * middle;
        if (pow_tmp == x) return middle;
        else if (pow_tmp < x) left = middle + 1;
        else right = middle - 1;
    }
    return left - 1;
}
#include "integer_break.hpp"

int Solution::integerBreak(int n) {
    if (n <= 3) return n - 1;
    int div = n / 3, mod = n % 3;
    if (mod == 0) return static_cast<int>(pow(3, div));
    if (mod == 1) return static_cast<int>(pow(3, div - 1) * 4);
    return static_cast<int>(pow(3, div) * 2);
}
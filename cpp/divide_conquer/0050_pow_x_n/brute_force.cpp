#include "pow_x_n.hpp"

// !!!!!!!!!!!!!!!!! TLE Alert!!!!!!!!!!!!!!!
double Solution::myPow(double x, int n) {
    if (abs(x) < 1e-9) {
        return 0.0;
    }
    long long num = n;
    if (n < 0) {
        x = 1 / x;
        num = -num;
    }
    double  res = 1.0;
    while (num-- > 0) {
        res *= x;
    }
    return res;
}
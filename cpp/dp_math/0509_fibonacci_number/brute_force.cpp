#include "fibonacci_number.hpp"

int Solution::fib(int n) {
    int a = 0, b = 1, sum;
    for (int i = 0; i < n; ++i) {
        sum = a + b;
        a = b;
        b = sum;
    }
    return a;
}
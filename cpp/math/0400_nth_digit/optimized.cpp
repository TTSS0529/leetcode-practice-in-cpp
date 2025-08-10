#include "nth_digit.hpp"

int Solution::findNthDigit(int n) {
    int digit = 1, start = 1;
    long long   count = 9LL;
    while (n > count) {
        n -= count;
        ++digit;
        start *= 10;
        count = 9LL * digit * start;
    }
    int num = start + (n - 1) / digit;
    string  s = to_string(num);
    return s[(n - 1) % digit] - '0';
}
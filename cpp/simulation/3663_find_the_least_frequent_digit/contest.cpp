#include "find_the_least_frequent_digit.hpp"

int Solution::getLeastFrequentDigit(int n) {
    vector<int> count(10, 0);
    while (n > 0) {
        ++count[n % 10];
        n /= 10;
    }
    int res, tmp = 15;
    for (int i = 0; i < 10; ++i) {
        if (count[i] && count[i] < tmp) {
            tmp = count[i];
            res = i;
        }
    }
    return res;
}
#include "sum_of_square_numbers.hpp"

bool Solution::judgeSquareSum(int c) {
    int left = 0, right = sqrt(c);
    while (left <= right) {
        long long   sum = 1LL * left * left + right * right;
        if (sum == c) return true;
        else if (sum < c) ++left;
        else --right;
    }
    return false;
}
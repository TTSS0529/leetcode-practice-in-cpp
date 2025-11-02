#include "binary_number_with_alternating_bits.hpp"

bool Solution::hasAlternatingBits(int n) {
    long long tmp = n ^ (n >> 1);
    return (tmp & (tmp + 1LL)) == 0;
}
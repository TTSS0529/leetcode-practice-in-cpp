#include "number_of_1_bits.hpp"

int Solution::hammingWeight(int n) {
    unsigned int res = 0;
    while (n != 0) {
        res += n & 1;
        n >>= 1;
    }
    return res;
}
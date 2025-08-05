#include "number_of_1_bits.hpp"

int Solution::hammingWeight(int n) {
    int res = 0;
    while (n != 0) {
        ++res;
        n &= n - 1;
    }
    return res;
}
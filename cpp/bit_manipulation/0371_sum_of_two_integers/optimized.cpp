#include "sum_of_two_integers.hpp"

int Solution::getSum(int a, int b) {
    while (b != 0) {
        int carry = static_cast<unsigned int>(a & b) << 1;
        a ^= b;
        b = carry;
    }
    return a;
}
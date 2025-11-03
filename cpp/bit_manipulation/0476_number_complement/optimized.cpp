#include "number_complement.hpp"

int Solution::findComplement(int num) {
    unsigned    mask = ~0;
    while (num & mask) mask <<= 1;
    return ~num & ~mask;
}
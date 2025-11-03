#include "number_complement.hpp"

int Solution::findComplement(int num) {
    int shift = 0;
    while ((num & 0x40000000) == 0) {
        ++shift;
        num <<= 1;
    }
    num = ~num;
    num &= 0x7FFFFFFF;
    while (shift--) {
        num >>= 1;
    }
    return num;
}
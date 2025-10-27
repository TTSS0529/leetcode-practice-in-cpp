#include "hamming_distance.hpp"

int Solution::hammingDistance(int x, int y) {
    int tmp = x ^ y, res = 0;
    while (tmp) {
        ++res;
        tmp &= tmp - 1;
    }
    return res;
}
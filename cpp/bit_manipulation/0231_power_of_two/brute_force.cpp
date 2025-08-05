#include "power_of_two.hpp"

bool Solution::isPowerOfTwo(int n) {
    if (n < 1) return false;
    return (n & n - 1) == 0;
}
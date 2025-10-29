#include "power_of_four.hpp"

bool Solution::isPowerOfFour(int n) {
    return n > 0 && !(n & (n - 1)) && n & 0x55555555;
}
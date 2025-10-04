#include "2_keys_keyboard.hpp"

int Solution::minSteps(int n) {
    if (n == 1) return 0;
    int res = 0;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res += i;
            n /= i;
        }
    }
    if (n > 1) res += n;
    return res;
}
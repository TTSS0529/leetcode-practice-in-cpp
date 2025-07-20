#include "split_array_by_prime_indices.hpp"

long long Solution::splitArray(vector<int>& nums) {
    int len = nums.size();
    vector<bool>    primeState(len, true);
    if (len > 0) {
        primeState[0] = false;
    }
    if (len > 1) {
        primeState[1] = false;
    }
    for (int p = 2; p * p < len; ++p) {
        if (primeState[p]) {
            for (int i = p * p; i < len; i += p) {
                primeState[i] = false;
            }
        }
    }
    long long   sumA = 0LL, sumB = 0LL;
    for (int i = 0; i < len; ++i) {
        if (primeState[i]) {
            sumA += nums[i];
        } else {
            sumB += nums[i];
        }
    }
    return abs(sumA - sumB);
}
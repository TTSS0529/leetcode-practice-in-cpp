#include "split_array_by_prime_indices.hpp"

long long Solution::splitArray(vector<int>& nums) {
    int len = nums.size();
    long long   sumA = 0LL, sumB = 0LL;
    for (int i = 0; i < len; ++i) {
        if (isPrime(i)) {
            sumA += nums[i];
        } else {
            sumB += nums[i];
        }
    }
    return abs(sumA - sumB);
}

bool    Solution::isPrime(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    int i = 2;
    while (i <= num / i) {
        if (num % i == 0) {
            return false;
        }
        ++i;
    }
    return true;
}
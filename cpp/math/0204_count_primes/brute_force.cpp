#include "count_primes.hpp"

int Solution::countPrimes(int n) {
    if (n < 3) return 0;
    vector<int> is_prime(n, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; 1LL * i * i < n; ++i) {
        if (is_prime[i]) {
            for (long long j = 1LL * i * i; j < n; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    return accumulate(is_prime.begin(), is_prime.end(), 0);
}
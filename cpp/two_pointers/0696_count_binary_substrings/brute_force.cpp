#include "count_binary_substrings.hpp"

int Solution::countBinarySubstrings(string s) {
    int n = s.size(), prev = 0, curr = 1, res = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            ++curr;
        } else {
            prev = curr;
            curr = 1;
        }
        if (prev >= curr) {
            ++res;
        }
    }
    return res;
}
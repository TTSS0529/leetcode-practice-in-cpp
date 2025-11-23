#include "palindromic_substrings.hpp"

int Solution::countSubstrings(string s) {
    int n = s.size(), res = 0;
    auto expand = [&](int l, int r) {
        int cnt = 0;
        while (l >= 0 && r < n && s[l] == s[r]) {
            ++cnt;
            --l;
            ++r;
        }
        return cnt;
    };
    for (int i = 0; i < n; ++i) {
        res += expand(i, i);
        res += expand(i, i + 1);
    }
    return res;
}
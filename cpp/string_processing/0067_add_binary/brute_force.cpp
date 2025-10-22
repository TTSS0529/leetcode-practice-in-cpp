#include "add_binary.hpp"

string Solution::addBinary(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    string  res;
    res.reserve(max(a.size(), b.size()) + 1);
    for (size_t i = 0, j = 0; i < a.size() || j < b.size() || carry;) {
        if (i < a.size()) carry += a[i++] - '0';
        if (j < b.size()) carry += b[j++] - '0';
        res += carry % 2 + '0';
        carry /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
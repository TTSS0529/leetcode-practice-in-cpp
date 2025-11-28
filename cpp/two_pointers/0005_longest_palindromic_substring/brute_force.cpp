#include "longest_palindromic_substring.hpp"

string Solution::longestPalindrome(string s) {
    int n = s.size(), start = 0, max_len = 1;
    if (n < 2) return s;
    for (int center = 0; center < n; ++center) {
        checkPalin(s, center, center, start, max_len);
        checkPalin(s, center, center + 1, start, max_len);
    }
    return s.substr(start, max_len);
}

void    Solution::checkPalin(const string& s, int left, int right, int& start, int& len) {
    int n = s.size();
    while (left >= 0 && right < n && s[left] == s[right]) {
        --left;
        ++right;
    }
    int len_str = right - left - 1;
    if (len_str > len) {
        len = len_str;
        start = left + 1;
    }
}
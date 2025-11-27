#include "find_the_index_of_the_first_occurrence_in_a_string.hpp"

int Solution::strStr(string haystack, string needle) {
    int m = haystack.size(), n = needle.size(), i = 0, j = 0;
    if (n > m) return -1;
    vector<int> lps(n);
    setLps(needle, lps);
    while (i < m) {
        if (haystack[i] == needle[j]) {
            ++i;
            ++j;
            if (j == n) return i - j;
        } else {
            if (j) j = lps[j - 1];
            else ++i;
        }
    }
    return -1;
}

void    Solution::setLps(const string& needle, vector<int>& lps) {
    int n = needle.size(), len = 0, i = 1;
    while (i < n) {
        if (needle[len] == needle[i]) {
            lps[i++] = ++len;
        } else {
            if (len) len = lps[len - 1];
            else lps[i++] = 0;
        }
    }
}
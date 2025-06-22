#include "is_subsequence.hpp"

bool Solution::isSubsequence(std::string s, std::string t) {
    size_t  i = 0;
    size_t  j = 0;
    for (; i < s.size() && j < t.size(); ++j) {
        if (s[i] == t[j]) {
            ++i;
        }
    }
    if (i == s.size()) {
        return true;
    }
    return false;
}
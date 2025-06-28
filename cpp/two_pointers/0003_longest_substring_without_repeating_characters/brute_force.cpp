#include "longest_substring_without_repeating_characters.hpp"

int Solution::lengthOfLongestSubstring(std::string s) {
    size_t  maxLen = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        int count[256] = {};
        size_t  j;
        for (j = i; j < s.size(); ++j) {
            unsigned char   c = static_cast<unsigned char>(s[j]);
            if (!count[c]) {
                ++count[c];
            } else {
                maxLen = maxLen > (j - i) ? maxLen : (j - i);
                break ;
            }
        }
        if (j == s.size()) {
            maxLen = maxLen > (j - i) ? maxLen : (j - i);
        }
    }
    return static_cast<int>(maxLen);
}
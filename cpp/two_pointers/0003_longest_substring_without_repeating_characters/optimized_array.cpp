#include "longest_substring_without_repeating_characters.hpp"

int Solution::lengthOfLongestSubstring(std::string s) {
    int dic[256];
    std::fill(dic, dic + 256, -1);
    int maxLen = 0, i = -1, j, len = static_cast<int>(s.size());
    for (j = 0; j < len; ++j) {
        unsigned char   c = static_cast<unsigned char>(s[j]);
        if (dic[c] > i) {
            i = dic[c];
        }
        dic[c] = j;
        maxLen = maxLen > j - i ? maxLen : (j - i);
    }
    return maxLen;
}
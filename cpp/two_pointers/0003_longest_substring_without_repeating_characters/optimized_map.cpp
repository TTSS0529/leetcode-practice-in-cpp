#include "longest_substring_without_repeating_characters.hpp"

int Solution::lengthOfLongestSubstring(std::string s) {
    std::unordered_map<char, int>   dic;
    int maxLen = 0, i = -1, j, len = static_cast<int>(s.size());
    for (j = 0; j < len; ++j) {
        if (dic.find(s[j]) != dic.end()) {
            i = i > dic[s[j]] ? i : dic[s[j]];
        }
        dic[s[j]] = j;
        maxLen = maxLen > j - i ? maxLen : (j - i);
    }
    return maxLen;
}
#include "valid_anagram.hpp"

bool Solution::isAnagram(std::string s, std::string t) {
    if (s.size() != t.size()) {
        return false;
    }
    int charCount[26] = {};
    for (size_t i = 0; i < s.size(); ++i) {
        ++charCount[s[i] - 'a'];
        --charCount[t[i] - 'a'];
    }
    for (size_t i = 0; i < 26; ++i) {
        if (charCount[i] != 0) {
            return false;
        }
    }
    return true;
}
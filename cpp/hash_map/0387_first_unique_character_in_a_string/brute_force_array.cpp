#include "first_unique_character_in_a_string.hpp"

int Solution::firstUniqChar(std::string s) {
    int count[26] = {};
    for (size_t i = 0; i < s.size(); ++i) {
        ++count[s[i] - 'a'];
    }
    for (size_t i = 0; i < s.size(); ++i) {
        if (count[s[i] - 'a'] == 1) {
            return i;
        }
    }
    return -1;
}
#include "first_unique_character_in_a_string.hpp"

int Solution::firstUniqChar(std::string s) {
    std::unordered_map<char, bool>  count;
    for (char c : s) {
        count[c] = count.find(c) == count.end();
    }
    for (size_t i = 0; i < s.size(); ++i) {
        if (count[s[i]]) {
            return i;
        }
    }
    return -1;
}
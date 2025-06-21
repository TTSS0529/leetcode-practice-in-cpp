#include "isomorphic_strings.hpp"

bool Solution::isIsomorphic(std::string s, std::string t) {
    std::unordered_map<char, char>  count, reverse;
    for (size_t i = 0; i < s.size(); ++i) {
        if ((count.find(s[i]) != count.end() && count[s[i]] != t[i]) \
            || reverse.find(t[i]) != reverse.end() && reverse[t[i]] != s[i]) {
            return false;
        } else {
            count[s[i]] = t[i];
            reverse[t[i]] = s[i];
        }
    }
    return true;
}
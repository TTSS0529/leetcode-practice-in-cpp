#include "isomorphic_strings.hpp"

bool Solution::isIsomorphic(std::string s, std::string t) {
    size_t    sTot[256] = {}, tTos[256] = {};
    for (size_t i = 0; i < s.size(); ++i) {
        // make sure that the index is not negative
        unsigned char    sc = s[i];
        unsigned char    tc = t[i];
        if (sTot[sc] != tTos[tc]) {
            return false;
        } else {
            sTot[sc] = i + 1;
            tTos[tc] = i + 1;
        }
    }
    return true;
}
#include "decode_string.hpp"

std::string Solution::recursiveDecode(std::string s, size_t& i) {
    size_t  len = s.size();
    int multi = 0;
    std::string res;
    while (i < len) {
        if (std::isdigit(s[i])) {
            multi = 0;
            while (i < len && std::isdigit(s[i])) {
                multi = multi * 10 + s[i] - '0';
                ++i;
            }
        } else if (std::islower(s[i])) {
            while (i < len && std::islower(s[i])) {
                res += s[i];
                ++i;
            }
        } else if (s[i] == '[') {
            std::string inner = recursiveDecode(s, ++i);
            while (multi-- > 0) {
                res += inner;
            }
        } else if (s[i] == ']') {
            ++i;
            return res;
        }
    }
    return res;
}

std::string Solution::decodeString(std::string s) {
    size_t  i = 0;
    return recursiveDecode(s, i);
}
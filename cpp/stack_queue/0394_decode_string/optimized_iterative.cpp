#include "decode_string.hpp"

std::string Solution::decodeString(std::string s) {
    size_t  i = 0;
    size_t  len = s.size();
    std::pair<size_t, std::string>  tmp = {0, ""};
    std::stack<std::pair<size_t, std::string> > res;
    while (i < len) {
        if (std::isdigit(s[i])) {
            while (i < len && std::isdigit(s[i])) {
                tmp.first = tmp.first * 10 + s[i] - '0';
                ++i;
            }
        } else if (std::islower(s[i])) {
            while (i < len && std::islower(s[i])) {
                tmp.second += s[i];
                ++i;
            }
        } else if (s[i] == '[') {
            res.push(tmp);
            tmp.first = 0;
            tmp.second = "";
            ++i;
        } else if (s[i] == ']') {
            std::pair<size_t, std::string>  getFromStack = res.top();
            res.pop();
            std::string multiCopy;
            while (getFromStack.first-- > 0) {
                multiCopy += tmp.second;
            }
            tmp.second = getFromStack.second + multiCopy;
            ++i;
        }
    }
    return tmp.second;
}
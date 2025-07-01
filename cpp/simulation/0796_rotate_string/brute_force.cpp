#include "rotate_string.hpp"

bool Solution::rotateString(std::string s, std::string goal) {
    if (s.size() != goal.size()) {
        return false;
    }
    auto    pos = goal.find(s[0]);
    while (pos != std::string::npos) {
        decltype(s.size())  i, j;
        for (i = 0, j = pos; i < s.size(); ++i) {
            if (s[i] != goal[j]) {
                break ;
            }
            if (j == goal.size() - 1) {
                j = 0;
            } else {
                ++j;
            }
        }
        if (i == s.size()) {
            return true;
        }
        pos = goal.find(s[0], pos + 1);
    }
    return false;
}
#include "string_to_integer_atoi.hpp"

int Solution::myAtoi(std::string s) {
    long long   result = 0;
    int flag = 1;
    size_t  i = 0;
    while (i < s.size() && s[i] == ' ')
        ++i;
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-')
            flag = -flag;
        ++i;
    }
    while (i < s.size() && std::isdigit(s[i])) {
        result = result * 10 + (s[i++] - '0');
        if (result > std::numeric_limits<int>::max()) {
            return (flag == 1 ? std::numeric_limits<int>::max() \
                : std::numeric_limits<int>::min());
        }
    }
    return static_cast<int>(result * flag);
}
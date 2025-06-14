#include "valid_parentheses.hpp"

bool Solution::isValid(std::string s) {
    std::stack<char>    parentheseStack;
    std::string left("({[");
    std::string right(")}]");
    for (size_t i = 0; i < s.size(); ++i) {
        if (left.find(s[i]) != std::string::npos) {
            parentheseStack.push(s[i]);
        } else {
            if (parentheseStack.empty() || parentheseStack.top() \
                != left[right.find(s[i])]) {
                return false;
            }
            parentheseStack.pop();
        }
    }
    if (!parentheseStack.empty()) {
        return false;
    }
    return true;
}

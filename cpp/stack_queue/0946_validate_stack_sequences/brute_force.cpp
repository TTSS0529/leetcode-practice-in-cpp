#include "validate_stack_sequences.hpp"

bool Solution::validateStackSequences(std::vector<int>& pushed, std::vector<int>& popped) {
    decltype(pushed.size()) i = 0, j = 0;
    std::stack<int> result;
    while (i < pushed.size()) {
        if (!result.empty() && result.top() == popped[j]) {
            result.pop();
            ++j;
        } else {
            result.push(pushed[i++]);
        }
    }
    while (j < popped.size()) {
        if (result.empty() || result.top() != popped[j]) {
            return false;
        }
        result.pop();
        ++j;
    }
    return result.empty();
}
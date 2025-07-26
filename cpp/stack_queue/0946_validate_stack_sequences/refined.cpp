#include "validate_stack_sequences.hpp"

bool Solution::validateStackSequences(std::vector<int>& pushed, std::vector<int>& popped) {
    std::vector<int>    vec;
    int len = pushed.size(), i = 0, j = 0;
    vec.reserve(len);
    for (; i < len && j < len; ++i) {
        vec.push_back(pushed[i]);
        while (!vec.empty() && vec.back() == popped[j]) {
            vec.pop_back();
            ++j;
        }
    }
    return (i == len && j == len);
}
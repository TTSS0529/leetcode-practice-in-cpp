#include "build_an_array_with_stack_operations.hpp"

vector<string> Solution::buildArray(vector<int>& target, int n) {
    int len = target.size();
    vector<string>  res;
    res.reserve(len * 2);
    for (int i = 0, j = 1; i < len; ++j) {
        res.emplace_back("Push");
        if (j == target[i]) ++i;
        else {
            res.emplace_back("Pop");
        }
    }
    return res;
}
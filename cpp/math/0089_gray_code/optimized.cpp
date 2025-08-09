#include "gray_code.hpp"

vector<int> Solution::grayCode(int n) {
    vector<int> res;
    res.reserve(1 << n);
    for (int i = 0; i < 1 << n; ++i) {
        res.push_back(i ^ (i >> 1));
    }
    return res;
}
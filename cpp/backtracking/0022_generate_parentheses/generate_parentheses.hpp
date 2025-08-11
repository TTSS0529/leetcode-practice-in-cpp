#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<string> generateParenthesis(int n);
private:
    void    backtrackGen(vector<string>& res, string& curr, int left, int right, int n);
};
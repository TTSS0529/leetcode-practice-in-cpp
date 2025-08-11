#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<string> letterCombinations(string digits);
private:
    void    backtrack(string& digits, vector<string>& dic, vector<string>& res,
                string& comb, int index);
};
#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    string longestPalindrome(string s);
    void    checkPalin(const string& s, int left, int right, int& start, int& len);
};
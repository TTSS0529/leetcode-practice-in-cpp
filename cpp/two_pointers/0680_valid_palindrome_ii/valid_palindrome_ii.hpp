#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    bool validPalindrome(string s);
private:
    bool    isPalindrome(const string& s, int left, int right);
};
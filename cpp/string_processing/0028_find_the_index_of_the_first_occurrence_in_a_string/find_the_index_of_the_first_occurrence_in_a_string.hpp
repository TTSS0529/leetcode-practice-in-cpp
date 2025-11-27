#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    int strStr(string haystack, string needle);
    void    setLps(const string& needle, vector<int>& lps);
};
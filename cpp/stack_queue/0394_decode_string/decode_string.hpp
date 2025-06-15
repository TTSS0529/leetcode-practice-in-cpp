#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <utility>

class Solution {
public:
    std::string decodeString(std::string s);
    std::string recursiveDecode(std::string s, size_t& i);// only for resurcive version
};
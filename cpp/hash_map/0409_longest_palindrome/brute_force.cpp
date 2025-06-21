#include "longest_palindrome.hpp"

int Solution::longestPalindrome(std::string s) {
    int count[256] = {};
    int result = 0;
    bool    odd = false;
    for (const char& c : s) {
        ++count[static_cast<int>(c)];
    }
    for (const int& n : count) {
        if (!odd && n % 2 != 0) {
            odd = true;
        }
        result += n / 2 * 2;
    }
    return (odd ? result + 1 : result);
}
#include "valid_palindrome_ii.hpp"

bool Solution::validPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    while (left <= right) {
        if (s[left] == s[right]) {
            ++left;
            --right;
        } else {
            return isPalindrome(s, left + 1, right) 
                || isPalindrome(s, left, right - 1);
        }
    }
    return true;
}

bool    Solution::isPalindrome(const string& s, int left, int right) {
    while (left <= right) {
        if (s[left] == s[right]) {
            ++left;
            --right;
        } else {
            break;
        }
    }
    return left > right;
}
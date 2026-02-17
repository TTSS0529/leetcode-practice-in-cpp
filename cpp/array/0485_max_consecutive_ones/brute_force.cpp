#include "max_consecutive_ones.hpp"

int Solution::findMaxConsecutiveOnes(vector<int>& nums) {
    int     ans = 0, curr = 0;
    for (const int& num : nums) {
        if (num) ++curr;
        else {
            ans = ans > curr ? ans : curr;
            curr = 0;
        }
    }
    ans = ans > curr ? ans : curr;
    return ans;
}
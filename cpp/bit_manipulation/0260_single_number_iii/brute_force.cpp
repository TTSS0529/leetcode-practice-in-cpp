#include "single_number_iii.hpp"

vector<int> Solution::singleNumber(vector<int>& nums) {
    unsigned    xor_all = 0;
    for (const int& num : nums) {
        xor_all ^= num;
    }
    unsigned    right_one = xor_all & (-xor_all);
    int first = 0, second = 0;
    for (const int& num : nums) {
        if (num & right_one) first ^= num;
        else second ^= num;
    }
    return {first, second};
}
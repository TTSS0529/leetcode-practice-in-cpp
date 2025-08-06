#include "single_number_ii.hpp"

int Solution::singleNumber(vector<int>& nums) {
    int res = 0;
    for (size_t i = 0; i < 32; ++i) {
        int count = 0;
        for (int n : nums) {
            count += (n >> i) & 1;
        }
        res |= (count % 3) << i;
    }
    return res;
}
#include "longest_consecutive_sequence.hpp"

int Solution::longestConsecutive(vector<int>& nums) {
    unordered_set<int>  hash(nums.begin(), nums.end());
    int res = 0;
    for (int num : hash) {
        if (hash.contains(num - 1))
            continue;
        int len = 1;
        while (hash.contains(++num)) {
            ++len;
        }
        res = max(res, len);
    }
    return res;
}
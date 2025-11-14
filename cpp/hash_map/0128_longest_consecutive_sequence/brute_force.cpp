#include "longest_consecutive_sequence.hpp"

int Solution::longestConsecutive(vector<int>& nums) {
    unordered_set<int>  hash;
    for (const int& num : nums) {
        hash.insert(num);
    }
    int res = 0;
    while (!hash.empty()) {
        int curr = *(hash.begin());
        hash.erase(curr);
        int prev = curr - 1, next = curr + 1;
        while (hash.count(prev)) {
            hash.erase(prev--);
        }
        while (hash.count(next)) {
            hash.erase(next++);
        }
        res = max(res, next - prev - 1);
    }
    return res;
}
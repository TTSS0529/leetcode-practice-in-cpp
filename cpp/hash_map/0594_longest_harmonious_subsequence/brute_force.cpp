#include "longest_harmonious_subsequence.hpp"

int Solution::findLHS(vector<int>& nums) {
    unordered_map<int, int> hash;
    for (const int& num : nums) {
        ++hash[num];
    }
    int res = 0;
    for (const auto& [num, count] : hash) {
        if (hash.find(num + 1) != hash.end()) {
            res = max(res, hash[num] + hash[num + 1]);
        }
    }
    return res;
}
#include "contains_duplicate.hpp"

bool Solution::containsDuplicate(vector<int>& nums) {
    unordered_set<int>  hash;
    hash.reserve(nums.size());
    for (const int& num : nums) {
        if (hash.count(num)) return true;
        hash.insert(num);
    }
    return false;
}
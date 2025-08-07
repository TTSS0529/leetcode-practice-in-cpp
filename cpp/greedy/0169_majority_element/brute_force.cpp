#include "majority_element.hpp"

int Solution::majorityElement(vector<int>& nums) {
    unordered_map<int, int> cnt;
    for (int num : nums) {
        if (cnt.find(num) == cnt.end()) {
            cnt[num] = 1;
        } else {
            ++cnt[num];
        }
    }
    int half = nums.size() / 2;
    for (auto& p : cnt) {
        if (p.second > half) return p.first;
    }
    return 0;
}
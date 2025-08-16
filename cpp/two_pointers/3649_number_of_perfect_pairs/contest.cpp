#include "number_of_perfect_pairs.hpp"

// TLE alert !!!!!!!!!!!!!!!!!!

long long Solution::perfectPairs(vector<int>& nums) {
    int len = nums.size();
    sort(nums.begin(), nums.end(), [] (int a, int b) { return abs(a) < abs(b); });
    long long   res = 0LL;
    for (int i = 0; i < len - 1; ++i) {
        for (int j = i + 1; j < len; ++j) {
            int a = nums[i], b = nums[j];
            if (min(abs(a - b), abs(a + b)) <= min(abs(a), abs(b))) {
                if (max(abs(a - b), abs(a + b)) >= max(abs(a), abs(b))) {
                    ++res;
                }
            } else {
                break;
            }
        }
    }
    return res;
}
#include "degree_of_an_array.hpp"

int Solution::findShortestSubArray(vector<int>& nums) {
    unordered_map<int, int> count;
    unordered_map<int, int> first;
    unordered_map<int, int> last;
    int len = nums.size(), degree = 0;
    for (int i = 0; i < len; ++i) {
        int curr = nums[i];
        if (first.find(curr) == first.end()) first[curr] = i;
        last[curr] = i;
        ++count[curr];
        degree = max(degree, count[curr]);
    }
    int res = numeric_limits<int>::max();
    for (const auto& p : count) {
        if (p.second == degree) {
            int curr = p.first;
            res = min(res, last[curr] - first[curr] + 1);
        }
    }
    return res == numeric_limits<int>::max() ? 0 : res;
}
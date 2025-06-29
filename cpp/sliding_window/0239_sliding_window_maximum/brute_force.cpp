#include "sliding_window_maximum.hpp"

std::vector<int> Solution::maxSlidingWindow(std::vector<int>& nums, int k) {
    std::priority_queue<int>    window;
    std::unordered_map<int, int>    toRemove;
    std::vector<int>    result;
    int len = static_cast<int>(nums.size());
    if (k > len) {
        return result;
    }
    for (int i = 0; i < k; ++i) {
        window.push(nums[i]);
    }
    result.push_back(window.top());
    for (int i = 0; i < len - k; ++i) {
        ++toRemove[nums[i]];
        window.push(nums[i + k]);
        while (toRemove[window.top()]) {
            --toRemove[window.top()];
            window.pop();
        }
        result.push_back(window.top());
    }
    return result;
}
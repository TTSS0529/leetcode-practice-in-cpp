#include "sliding_window_maximum.hpp"

std::vector<int> Solution::maxSlidingWindow(std::vector<int>& nums, int k) {
    std::vector<int>    result;
    std::deque<int>     dq;
    int len = static_cast<int>(nums.size());
    for (int i = 0; i < len; ++i) {
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }
    return result;
}
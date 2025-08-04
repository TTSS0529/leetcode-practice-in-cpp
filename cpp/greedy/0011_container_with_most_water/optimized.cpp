#include "container_with_most_water.hpp"

int Solution::maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1, res = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            res = max(res, height[left] * (right - left));
            ++left;
        } else {
            res = max(res, height[right] * (right - left));
            --right;
        }
    }
    return res;
}
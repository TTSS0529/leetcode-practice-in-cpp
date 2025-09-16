#include "kth_largest_element_in_an_array.hpp"

int Solution::findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>>  minHeap;
    for (auto n : nums) {
        if (minHeap.empty() || k > 0) {
            minHeap.push(n);
            --k;
        } else if (n > minHeap.top()) {
            minHeap.pop();
            minHeap.push(n);
        }
    }
    return minHeap.top();
}
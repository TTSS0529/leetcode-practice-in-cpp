#include "max_chunks_to_make_sorted_ii.hpp"

int Solution::maxChunksToSorted(vector<int>& arr) {
    stack<int>  maxChunks;
    for (int n : arr) {
        if (!maxChunks.empty() && n < maxChunks.top()) {
            int head = maxChunks.top();
            maxChunks.pop();
            while (!maxChunks.empty() && n < maxChunks.top()) {
                maxChunks.pop();
            }
            maxChunks.push(head);
        } else {
            maxChunks.push(n);
        }
    }
    return maxChunks.size();
}
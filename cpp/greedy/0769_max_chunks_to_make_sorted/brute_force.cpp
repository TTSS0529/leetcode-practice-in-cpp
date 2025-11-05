#include "max_chunks_to_make_sorted.hpp"

int Solution::maxChunksToSorted(vector<int>& arr) {
    int res = 0, cur_max = -1, n = arr.size();
    for (int i = 0; i < n; ++i) {
        cur_max = max(cur_max, arr[i]);
        if (cur_max == i) ++res;
    }
    return res;
}
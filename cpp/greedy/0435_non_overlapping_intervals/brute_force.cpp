#include "non_overlapping_intervals.hpp"

int Solution::eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(),
        [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
    });
    int m = intervals.size(), prev = intervals[0][1], res = 0;
    for (int i = 1; i < m; ++i) {
        if (intervals[i][0] < prev) {
            ++res;
        } else {
            prev = intervals[i][1];
        }
    }
    return res;
}
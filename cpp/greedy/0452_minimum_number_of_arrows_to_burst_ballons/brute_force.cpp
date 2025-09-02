#include "minimum_number_of_arrows_to_burst_ballons.hpp"

int Solution::findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(), points.end(),
        [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
    });
    int m = points.size(), prev = points[0][1], res = 1;
    for (int i = 1; i < m; ++i) {
        if (points[i][0] > prev) {
            ++res;
            prev = points[i][1];
        }
    }
    return res;
}
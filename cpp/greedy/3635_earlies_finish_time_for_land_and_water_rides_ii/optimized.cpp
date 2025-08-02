#include "earlies_finish_time_for_land_and_water_rides_ii.hpp"

int Solution::earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
        vector<int>& waterStartTime, vector<int>& waterDuration) {
    int res = INT_MAX, m = landStartTime.size(), minLand = INT_MAX;
    for (int i = 0; i < m; ++i) {
        minLand = min(minLand, landStartTime[i] + landDuration[i]);
    }
    int n = waterStartTime.size();
    for (int j = 0; j < n; ++j) {
        res = min(res, max(minLand, waterStartTime[j]) + waterDuration[j]);
    }
    int minWater = INT_MAX;
    for (int j = 0; j < n; ++j) {
        minWater = min(minWater, waterStartTime[j] + waterDuration[j]);
    }
    for (int i = 0; i < m; ++i) {
        res = min(res, max(minWater, landStartTime[i]) + landDuration[i]);
    }
    return res;
}
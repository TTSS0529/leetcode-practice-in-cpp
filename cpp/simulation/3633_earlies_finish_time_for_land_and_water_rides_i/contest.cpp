#include "earlies_finish_time_for_land_and_water_rides_i.hpp"

int Solution::earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
        vector<int>& waterStartTime, vector<int>& waterDuration) {
    int m = landStartTime.size(), n = waterStartTime.size();
    int earlyTime = INT_MAX;
    for (int i = 0; i < m; ++i) {
        int tmp = INT_MAX;
        for (int j = 0; j < n; ++j) {
            if (waterStartTime[j] + waterDuration[j] <= landStartTime[i]) {
                tmp = min(tmp, landStartTime[i] + landDuration[i]);
            } else if (waterStartTime[j] >= landStartTime[i] + landDuration[i]) {
                tmp = min(tmp, waterStartTime[j] + waterDuration[j]);
            } else {
                tmp = min(tmp, waterStartTime[j] + waterDuration[j] + landDuration[i]);
                tmp = min(tmp, landStartTime[i] + landDuration[i] + waterDuration[j]);
            }
        }
        earlyTime = min(earlyTime, tmp);
    }
    return earlyTime;
}
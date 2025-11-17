#include "max_points_on_a_line.hpp"

int Solution::maxPoints(vector<vector<int>>& points) {
    int len = points.size(), max_points = 0;;
    unordered_map<double, int>  hash;
    for (int i = 0; i < len; ++i) {
        int same = 1, same_y = 1;
        for (int j = i + 1; j < len; ++j) {
            if (points[i][1] == points[j][1]) {
                ++same_y;
                if (points[i][0] == points[j][0]) {
                    ++same;
                }
            } else {
                double  dx = points[j][0] - points[i][0];
                double  dy = points[j][1] - points[i][1];
                ++hash[dx / dy];
            }
        }
        max_points = max(max_points, same_y);
        for (const auto& item : hash) {
            max_points = max(max_points, same + item.second);
        }
        hash.clear();
    }
    return max_points;
}
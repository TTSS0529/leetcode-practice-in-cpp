#include "minimum_cost_path_with_alternating_direction_ii.hpp"

long long   Solution::minCost(int m, int n, vector<vector<int>>& waitCost) {
    vector<vector<long long>>   costAll(m);
    for (int i = 0; i < m; ++i) {
        costAll[i].resize(n);
    }
    costAll[0][0] = 1;
    if (m == 1 && n == 1)
        return costAll[0][0];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 && j == 0) {
                continue ;
            }
            if (i == 0 && j == 1) {
                costAll[i][j] = costAll[i][j - 1] + static_cast<long long>(i +  1) * (j + 1);
            } else if (i == 1 && j == 0) {
                costAll[i][j] = costAll[i - 1][j] + static_cast<long long>(i +  1) * (j + 1);
            } else if (i == 0) {
                costAll[i][j] = costAll[i][j - 1] + static_cast<long long>(i +  1) * (j + 1) + waitCost[i][j - 1];
            } else if (j == 0) {
                costAll[i][j] = costAll[i - 1][j] + static_cast<long long>(i +  1) * (j + 1) + waitCost[i - 1][j];
            } else {
                costAll[i][j] = std::min(waitCost[i][j - 1] + costAll[i][j - 1], \
                    waitCost[i - 1][j] + costAll[i - 1][j]) + static_cast<long long>(i +  1) * (j + 1);
            }
        }
    }
    return costAll[m - 1][n - 1];
}
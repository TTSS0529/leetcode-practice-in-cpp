#include "minimum_cost_path_with_alternating_direction_ii.hpp"

long long   Solution::minCost(int m, int n, vector<vector<int>>& waitCost) {
    vector<vector<long long>>   costAll(m, vector<long long>(n, 0LL));
    costAll[0][0] = 1;
    if (m == 1 && n == 1)
        return costAll[0][0];
    if (m > 1)
        costAll[1][0] = 3;
    if (n > 1)
        costAll[0][1] = 3;
    for (int j = 2; j < n; ++j)
        costAll[0][j] = costAll[0][j - 1] + 1LL * (j + 1) + waitCost[0][j - 1];
    for (int i = 2; i < m; ++i)
        costAll[i][0] = costAll[i - 1][0] + 1LL * (i + 1) + waitCost[i - 1][0];
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            costAll[i][j] = std::min(
                waitCost[i][j - 1] + costAll[i][j - 1],
                waitCost[i - 1][j] + costAll[i - 1][j])
                + static_cast<long long>(i +  1) * (j + 1);
        }
    }
    return costAll[m - 1][n - 1];
}
#include "the_skyline_problem.hpp"

vector<vector<int>> Solution::getSkyline(vector<vector<int>>& buildings) {
    int len = buildings.size(), i = 0, cur_x, cur_h;
    vector<vector<int>> res;
    priority_queue<pair<int, int>>    pq;
    while (i < len || !pq.empty()) {
        if (pq.empty() || (i < len && buildings[i][0] <= pq.top().second)) {
            cur_x = buildings[i][0];
            while (i < len && cur_x == buildings[i][0]) {
                pq.emplace(buildings[i][2], buildings[i][1]);
                ++i;
            }
        } else {
            cur_x = pq.top().second;
            while (!pq.empty() && pq.top().second <= cur_x) {
                pq.pop();
            }
        }
        cur_h = (pq.empty()) ? 0 : pq.top().first;
        if (res.empty() || cur_h != res.back()[1]) {
            res.push_back({cur_x, cur_h});
        }
    }
    return res;
}
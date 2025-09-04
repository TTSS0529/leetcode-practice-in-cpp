#include "queue_reconstruction_by_height.hpp"

vector<vector<int>> Solution::reconstructQueue(vector<vector<int>>& people) {
    sort(people.begin(), people.end(),
        [](vector<int>& a, vector<int>& b) {
            return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
    });
    vector<vector<int>> res;
    res.reserve(people.size());
    for (auto& p : people) {
        res.insert(res.begin() + p[1], p);
    }
    return res;
}
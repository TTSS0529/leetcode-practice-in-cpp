#include "beautiful_array.hpp"

vector<int> Solution::beautifulArray(int n) {
    static vector<vector<int>>  map(1001);
    if (!map[n].empty()) return map[n];
    if (n == 1) return map[n] = {1};
    const vector<int>& odds = beautifulArray((n + 1) / 2);
    const vector<int>& evens = beautifulArray(n / 2);
    vector<int> res;
    res.reserve(n);
    for (const int& odd : odds) {
        res.push_back(odd * 2 - 1);
    }
    for (const int& even : evens) {
        res.push_back(even * 2);
    }
    return map[n] = res;
}
#include "network_recovery_pathways.hpp"

// !!!!!!!!!!!!!!!!! TLE Alert!!!!!!!!!!!!!!!

int Solution::findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
    int len = online.size();
    vector<vector<pair<int, int>>> graph(len);
    for (auto& line : edges) {
        int from = line[0], to = line[1], cost = line[2];
        if (online[from] && online[to]) {
            graph[from].push_back(make_pair(to, cost));
        }
    }
    vector<int> pathCost;
    int res = -1;
    findPath(graph, k, pathCost, res, 0);
    return res;
}

void    Solution::findPath(vector<vector<pair<int, int>>>& graph, long long k,
                vector<int>& pathCost, int& res, int curr) {
    int len = graph.size();
    if (curr == len - 1) {
        int tmp = 100000000;
        for (int n : pathCost) {
            if (n < tmp) {
                tmp = n;
            }
        }
        if (tmp > res) {
            res = tmp;
        }
        return;
    }
    for (auto path : graph[curr]) {
        if (path.second > k) {
            continue;
        }
        pathCost.push_back(path.second);
        findPath(graph, k - path.second, pathCost, res, path.first);
        pathCost.pop_back();
    }
}
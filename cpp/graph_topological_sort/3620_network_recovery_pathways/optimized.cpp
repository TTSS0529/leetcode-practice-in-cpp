#include "network_recovery_pathways.hpp"

int Solution::findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
    int n = online.size();
    vector<vector<pair<int, int>>>  graph(n);
    vector<int> indegree(n, 0);
    vector<int> cost;
    for (auto& line : edges) {
        int from = line[0], to = line[1], c = line[2];
        if (!online[from] || !online[to]) {
            continue;
        }
        graph[from].push_back({to, c});
        ++indegree[to];
        cost.push_back(c);
    }
    vector<int> topo;
    topo.reserve(n);
    queue<int>  que;
    for (int i = 0; i < n; ++i) {
        if (!indegree[i]) {
            que.push(i);
        }
    }
    while (!que.empty()) {
        int tmp = que.front();
        que.pop();
        topo.push_back(tmp);
        for (auto& p : graph[tmp]) {
            if (--indegree[p.first] == 0) {
                que.push(p.first);
            }
        }
    }
    sort(cost.begin(), cost.end());
    cost.erase(unique(cost.begin(), cost.end()), cost.end());
    int   left = 0, right = cost.size() - 1, res = -1;
    while (left <= right) {
        int   mid = left + (right - left) / 2;
        vector<long long>   dp(n, LLONG_MAX);
        dp[0] = 0LL;
        for (int node : topo) {
            if (dp[node] > k || !online[node]) {
                continue;
            }
            for (auto& p : graph[node]) {
                int to = p.first;
                int   c = p.second;
                if (c < cost[mid] || !online[to]) {
                    continue;
                }
                long long   dpCost = dp[node] + c;
                if (dpCost < dp[to]) {
                    dp[to] = dpCost;
                }
            }
        }
        if (dp[n - 1] <= k) {
            res = cost[mid];
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return res;
}
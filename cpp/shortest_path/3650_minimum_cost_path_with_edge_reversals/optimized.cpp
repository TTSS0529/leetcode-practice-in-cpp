#include "minimum_cost_path_with_edge_reversals.hpp"

int Solution::minCost(int n, vector<vector<int>>& edges) {
    vector<vector<pair<int, int>>>  adj(n);
    for (auto& edge : edges) {
        int from = edge[0], to = edge[1], cost = edge[2];
        adj[from].emplace_back(to, cost);
        adj[to].emplace_back(from, 2 * cost);
    }
    using   node = pair<long long, int>;
    priority_queue<node, vector<node>, greater<node>>   heap;
    const long long INF = (1LL << 62);
    vector<long long>   dist(n, INF);
    dist[0] = 0;
    heap.emplace(0, 0);
    while (!heap.empty()) {
        auto    [d, u] = heap.top();
        heap.pop();
        if (d != dist[u]) continue;
        if (u == n - 1) break;
        for (auto   [v, w] : adj[u]) {
            long long   nd = d + w;
            if (nd < dist[v]) {
                dist[v] = nd;
                heap.emplace(nd, v);
            }
        }
    }
    return (dist[n - 1] > static_cast<long long>(INT_MAX) \
        ? -1 : static_cast<int>(dist[n - 1]));
}
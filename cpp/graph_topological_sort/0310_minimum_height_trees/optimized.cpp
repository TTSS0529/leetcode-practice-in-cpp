#include "minimum_height_trees.hpp"

vector<int> Solution::findMinHeightTrees(int n, vector<vector<int>>& edges) {
    if (n == 1) return {0};
    vector<vector<int>> graph(n);
    vector<int> degree(n, 0);
    for (const auto& edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
        ++degree[edge[0]];
        ++degree[edge[1]];
    }
    queue<int>  q;
    for (int i = 0; i < n; ++i) {
        if (degree[i] == 1) q.push(i);
    }
    int remain = n;
    while (remain > 2) {
        int sz = q.size();
        remain -= sz;
        for (int i = 0; i < sz; ++i) {
            int node = q.front();
            q.pop();
            for (int next : graph[node]) {
                if (--degree[next] == 1) q.push(next);
            }
        }
    }
    vector<int> res;
    while (!q.empty()) {
        res.push_back(q.front());
        q.pop();
    }
    return res;
}
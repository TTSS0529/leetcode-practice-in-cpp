#include "course_schedule.hpp"

bool Solution::canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> graph(numCourses);
    vector<int> state(numCourses, 0);
    for (auto& pre : prerequisites) {
        graph[pre[1]].push_back(pre[0]);
    }
    for (int i = 0; i < numCourses; ++i) {
        if (dfs(graph, state, i)) {
            return false;
        }
    }
    return true;
}

bool    Solution::dfs(vector<vector<int>>& graph, vector<int>& state, int curr) {
    if (state[curr] == 1) {
        return true;
    }
    if (state[curr] == 2) {
        return false;
    }
    state[curr] = 1;
    for (int n : graph[curr]) {
        if (dfs(graph, state, n)) {
            return true;
        }
    }
    state[curr] = 2;
    return false;
}
#include "course_schedule.hpp"

bool Solution::canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> graph(numCourses);
    vector<int> indegree(numCourses, 0);
    for (auto& pre : prerequisites) {
        int to = pre[0], from = pre[1];
        graph[from].push_back(to);
        ++indegree[to];
    }
    queue<int>  que;
    for (int i = 0; i < numCourses; ++i) {
        if (!indegree[i]) {
            que.push(i);
        }
    }
    int finish = 0;
    while (!que.empty()) {
        int tmp = que.front();
        que.pop();
        ++finish;
        for (int n : graph[tmp]) {
            --indegree[n];
            if (!indegree[n]) {
                que.push(n);
            }
        }
    }
    return finish==numCourses;
}
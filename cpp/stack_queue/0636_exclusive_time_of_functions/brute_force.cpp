#include "exclusive_time_of_functions.hpp"

vector<int> Solution::exclusiveTime(int n, vector<string>& logs) {
    vector<int> res(n);
    stack<int>  st;
    int prev_t{};
    for (const auto& log : logs) {
        int id{}, curr_t{};
        size_t  i{};
        while (log[i] != ':') {
            id = id * 10 + log[i++] - '0';
        }
        size_t  j = ++i;
        while (log[i] != ':') {
            ++i;
        }
        auto    info = log.substr(j, i++ - j);
        while (i < log.size()) {
            curr_t = curr_t * 10 + log[i++] - '0';
        }
        if (info == "start") {
            if (!st.empty()) res[st.top()] += curr_t - prev_t;
            st.push(id);
            prev_t = curr_t;
        } else if (info == "end") {
            res[st.top()] += curr_t - prev_t + 1;
            st.pop();
            prev_t = curr_t + 1;
        }
    }
    return res;
}
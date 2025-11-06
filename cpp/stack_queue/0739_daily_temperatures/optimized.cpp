#include "daily_temperatures.hpp"

vector<int> Solution::dailyTemperatures(vector<int>& temperatures) {
    int len = temperatures.size();
    vector<int> res(len), stk;
    stk.reserve(len);
    for (int i = 0; i < len; ++i) {
        int curr = temperatures[i];
        while (!stk.empty() && curr > temperatures[stk.back()]) {
            int index = stk.back();
            stk.pop_back();
            res[index] = i - index;
        }
        stk.push_back(i);
    }
    return res;
}
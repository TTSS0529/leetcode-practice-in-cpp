#include "next_greater_ekement_ii.hpp"

vector<int> Solution::nextGreaterElements(vector<int>& nums) {
    int len = nums.size();
    stack<int>  st;
    vector<int> res(len, -1);
    for (int i = 0; i < 2 * len; ++i) {
        int curr = nums[i % len];
        while (!st.empty() && curr > nums[st.top()]) {
            res[st.top()] = curr;
            st.pop();
        }
        if (i < len) {
            st.push(i);
        }
    }
    return res;
}
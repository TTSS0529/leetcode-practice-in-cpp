#include "set_mismatch.hpp"

vector<int> Solution::findErrorNums(vector<int>& nums) {
    int n = nums.size();
    vector<int> flags(n + 1);
    vector<int> ans(2);
    for (const int& num : nums) {
        ++flags[num];
    }
    for (int i = 1; i <= n; ++i) {
        if (flags[i] == 2) ans[0] = i;
        else if (flags[i] == 0) ans[1] = i;
    }
    return ans;
}
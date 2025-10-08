#include "maximum_length_of_pair_chain.hpp"

int Solution::findLongestChain(vector<vector<int>>& pairs) {
    sort(pairs.begin(), pairs.end(),
        [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
    });
    int res = 1, prev = pairs[0][1];
    for (size_t i = 1; i < pairs.size(); ++i) {
        if (pairs[i][0] > prev) {
            ++res;
            prev = pairs[i][1];
        }
    }
    return res;
}
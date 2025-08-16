#include "number_of_perfect_pairs.hpp"

long long Solution::perfectPairs(vector<int>& nums) {
    int len = nums.size();
    vector<long long>   numAbs;
    numAbs.reserve(len);
    for (int n : nums) {
        numAbs.push_back(abs(static_cast<long long>(n)));
    }
    sort(numAbs.begin(), numAbs.end());
    long long   res = 0LL;
    int j = 0;
    for (int i = 0; i < len - 1; ++i) {
        if (j <= i) j = i + 1;
        while (j < len && numAbs[j] <= 2 * numAbs[i]) ++j;
        res += j - i - 1;
    }
    return res;
}
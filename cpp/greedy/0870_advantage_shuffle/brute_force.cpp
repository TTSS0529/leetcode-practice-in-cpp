#include "advantage_shuffle.hpp"

vector<int> Solution::advantageCount(vector<int>& nums1, vector<int>& nums2) {
    int n = nums2.size();
    sort(nums1.begin(), nums1.end());
    vector<pair<int, int>>  new_num;
    new_num.reserve(n);
    for (int i = 0; i < n; ++i) {
        new_num.emplace_back(nums2[i], i);
    }
    sort(new_num.begin(), new_num.end(),
        [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
    });
    int left = 0, right = n - 1;
    vector<int> res(n);
    for (const auto& [num, index] : new_num) {
        if (num < nums1[right]) {
            res[index] = nums1[right--];
        } else {
            res[index] = nums1[left++];
        }
    }
    return res;
}
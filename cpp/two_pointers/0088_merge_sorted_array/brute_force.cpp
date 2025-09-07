#include "merge_sorted_array.hpp"

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> tmp;
    tmp.reserve(m + n);
    int i, j;
    for (i = 0, j = 0; i < m && j < n;) {
        if (nums1[i] < nums2[j]) {
            tmp.push_back(nums1[i++]);
        } else {
            tmp.push_back(nums2[j++]);
        }
    }
    while (i < m) {
        tmp.push_back(nums1[i++]);
    }
    while (j < n) {
        tmp.push_back(nums2[j++]);
    }
    nums1 = tmp;
}
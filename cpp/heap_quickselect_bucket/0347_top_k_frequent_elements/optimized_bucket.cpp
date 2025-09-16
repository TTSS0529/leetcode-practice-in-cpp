#include "top_k_frequent_elements.hpp"

vector<int> Solution::topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> counts;
    int max_count = 0;
    for (int num : nums) {
        max_count = max(max_count, ++counts[num]);
    }
    vector<vector<int>> buckets(max_count + 1);
    for (const auto& count : counts) {
        buckets[count.second].push_back(count.first);
    }
    vector<int> res;
    res.reserve(k);
    for (int i = max_count; i >= 0 && static_cast<int>(res.size()) < k; --i) {
        for (int num : buckets[i]) {
            res.push_back(num);
        }
    }
    return res;
}
#include "top_k_frequent_elements.hpp"

vector<int> Solution::topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> counts;
    for (int num : nums) {
        ++counts[num];
    }
    vector<pair<int, int>>  freq;
    freq.reserve(counts.size());
    for (const auto& count : counts) {
        freq.push_back(count);
    }
    nth_element(freq.begin(), freq.begin() + k, freq.end(),
        [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
    vector<int> res;
    res.reserve(k);
    for (int i = 0; i < k; ++i) {
        res.push_back(freq[i].first);
    }
    return res;
}
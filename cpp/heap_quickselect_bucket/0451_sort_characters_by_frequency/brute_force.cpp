#include "sort_characters_by_frequency.hpp"

string Solution::frequencySort(string s) {
    int counts[256]{}, max_count = 0;
    for (unsigned char c : s) {
        max_count = max(max_count, ++counts[c]);
    }
    vector<vector<char>>    buckets(max_count + 1);
    for (int i = 0; i < 256; ++i) {
        if (!counts[i]) continue;
        buckets[counts[i]].push_back(i);
    }
    string  res;
    res.reserve(s.size());
    for (int i = max_count; i > 0; --i) {
        for (char c : buckets[i]) {
            res += string(i, c);
        }
    }
    return res;
}
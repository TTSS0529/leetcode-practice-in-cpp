#include "partition_labels.hpp"

vector<int> Solution::partitionLabels(string s) {
    int len = s.size();
    vector<int> record(26, -1);
    for (int i = 0; i < len; ++i) {
        unsigned char   c = s[i];
        record[c - 'a'] = i;
    }
    vector<int> res;
    res.reserve(26);
    int left = 0, right = 0;
    for (int i = 0; i < len; ++i) {
        unsigned char   c = s[i];
        right = max(right, record[c - 'a']);
        if (right == i) {
            res.push_back(right - left + 1);
            left = right + 1;
        }
    }
    return res;
}
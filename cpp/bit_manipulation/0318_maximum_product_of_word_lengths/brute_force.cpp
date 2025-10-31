#include "maximum_product_of_word_lengths.hpp"

int Solution::maxProduct(vector<string>& words) {
    unordered_map<int, int> record;
    int res = 0;
    for (const string& word : words) {
        int len = word.size(), mask = 0;
        for (const char c : word) {
            mask |= 1 << (c - 'a');
        }
        record[mask] = max(record[mask], len);
        for (const auto& [h_mask, h_len] : record) {
            if (!(mask & h_mask)) {
                res = max(res, len * h_len);
            }
        }
    }
    return res;
}
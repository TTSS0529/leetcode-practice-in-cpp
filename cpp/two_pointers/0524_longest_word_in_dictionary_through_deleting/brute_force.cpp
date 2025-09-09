#include "longest_word_in_dictionary_through_deleting.hpp"

string Solution::findLongestWord(string s, vector<string>& dictionary) {
    int m = s.size();
    string  res;
    for (const auto& dic : dictionary) {
        int n = dic.size();
        if (n > m) continue;
        int j = 0;
        for (int i = 0; i < m && j < n; ++i) {
            if (s[i] == dic[j]) ++j;
        }
        if (j == n) {
            if (dic.size() > res.size() || (dic.size() == res.size() && dic < res)) {
                res = dic;
            }
        }
    }
    return res;
}
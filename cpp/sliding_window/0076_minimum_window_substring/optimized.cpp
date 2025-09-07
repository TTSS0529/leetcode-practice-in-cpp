#include "minimum_window_substring.hpp"

string Solution::minWindow(string s, string t) {
    int m = s.size(), n = t.size();
    vector<int>    count(256, 0);
    vector<bool>    flag(256, false);
    for (unsigned char c : t) {
        flag[c] = true;
        ++count[c];
    }
    int left = 0, min_left = 0, min_len = m + 1, num_in = 0;
    for (int right = 0; right < m; ++right) {
        unsigned char   tar_r = static_cast<unsigned char>(s[right]);
        if (flag[tar_r]) {
            if (--count[tar_r] >= 0) {
                ++num_in;
            }
            while (num_in == n) {
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    min_left = left;
                }
                unsigned char  tar_l = static_cast<unsigned char>(s[left]); 
                if (flag[tar_l] && ++count[tar_l] > 0) {
                    --num_in;
                }
                ++left;
            }
        }
    }
    return min_len > m ? "" : s.substr(min_left, min_len);
}
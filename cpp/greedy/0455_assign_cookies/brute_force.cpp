#include "assign_cookies.hpp"

int Solution::findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int len_g = g.size(), len_s = s.size(), i = 0;
    for (int j = 0; i < len_g && j < len_s; ++j) {
        if (s[j] >= g[i]) ++i;
    }
    return i;
}
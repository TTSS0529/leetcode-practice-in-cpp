#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<string>> partition(string s);
private:
    void    backtr(vector<vector<string>>& res, vector<string>& path,
                vector<vector<bool>>& dp, string& s, int start, int n);
    void    backtr(vector<vector<string>>& res, vector<pair<int, int>>& path,
                vector<vector<bool>>& dp, string& s, int start, int n);
};
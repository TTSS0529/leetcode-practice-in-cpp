#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word);
private:
    bool    dfs(vector<vector<char>>& board, string& word, int i, int j, int s, int m, int n, int len);
};
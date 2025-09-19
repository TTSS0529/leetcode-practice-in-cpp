#pragma once

#include "../../simple_test.hpp"

class Solution {
public:
    vector<vector<string>> findLadders(string beginWord,
        string endWord, vector<string>& wordList);
private:
    void    backtr(vector<vector<string>>& res, unordered_map<string, int>& depth,
                vector<string>& path, string& curr, const string& beginWord);
};
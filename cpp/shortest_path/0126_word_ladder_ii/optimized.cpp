#include "word_ladder_ii.hpp"

vector<vector<string>> Solution::findLadders(string beginWord,
        string endWord, vector<string>& wordList) {
    unordered_set<string>   wordSet(wordList.begin(), wordList.end());
    vector<vector<string>>  res;
    if (!wordSet.count(endWord)) return res;
    wordSet.erase(beginWord);
    unordered_map<string, int>  depth;
    depth[beginWord] = 1;
    queue<string>   q;
    q.push(beginWord);
    while (!q.empty()) {
        string  curr = q.front(); q.pop();
        int steps = depth[curr];
        if (curr == endWord) break;
        for (size_t i = 0; i < curr.size(); ++i) {
            char    orig = curr[i];
            for (char c = 'a'; c <= 'z'; ++c) {
                curr[i] = c;
                if (wordSet.count(curr)) {
                    q.push(curr);
                    depth[curr] = steps + 1;
                    wordSet.erase(curr);
                }
            }
            curr[i] = orig;
        }
    }
    if (depth.count(endWord)) {
        vector<string>  path{endWord};
        backtr(res, depth, path, endWord, beginWord);
    }
    return res;
}

void    Solution::backtr(vector<vector<string>>& res, unordered_map<string, int>& depth,
                vector<string>& path, string& curr, const string& beginWord) {
    if (curr == beginWord) {
        vector<string>  tmp = path;
        reverse(tmp.begin(), tmp.end());
        res.push_back(tmp);
        return;
    }
    int steps = depth[curr];
    for (size_t i = 0; i < curr.size(); ++i) {
        char    orig = curr[i];
        for (char c = 'a'; c <= 'z'; ++c) {
            curr[i] = c;
            if (depth.count(curr) && depth[curr] + 1 == steps) {
                path.push_back(curr);
                backtr(res, depth, path, curr, beginWord);
                path.pop_back();
            }
        }
        curr[i] = orig;
    }
}
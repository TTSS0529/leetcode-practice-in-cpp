#include "word_search.hpp"

bool Solution::exist(vector<vector<char>>& board, string word) {
    int m = board.size(), n = board[0].size(), len = word.size();
    if (len > m * n) {
        return false;
    }
    int count[256] = {0};
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            unsigned char   c = board[i][j];
            ++count[c];
        }
    }
    for (unsigned char c : word) {
        if (--count[c] < 0) {
            return false;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == word[0] && dfs(board, word, i, j, 0, m, n, len)) {
                return true;
            }
        }
    }
    return false;
}

bool    Solution::dfs(vector<vector<char>>& board, string& word, int i, int j, int s, int m, int n, int len) {
    if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[s]) {
        return false;
    }
    if (s == len - 1) {
        return true;
    }
    board[i][j] = '\0';
    bool    res = dfs(board, word, i + 1, j, s + 1, m, n, len) || \
                    dfs(board, word, i - 1, j, s + 1, m, n, len) || \
                    dfs(board, word, i, j + 1, s + 1, m, n, len) || \
                    dfs(board, word, i, j - 1, s + 1, m, n, len);
    board[i][j] = word[s];
    return res;
}
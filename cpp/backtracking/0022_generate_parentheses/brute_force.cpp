#include "generate_parentheses.hpp"

vector<string> Solution::generateParenthesis(int n) {
    vector<string>  res;
    string  curr;
    curr.reserve(2 * n);
    backtrackGen(res, curr, 0, 0, n);
    return res;
}

void    Solution::backtrackGen(vector<string>& res, string& curr, int left, int right, int n) {
    if (left == n && right == n) {
        res.push_back(curr);
        return;
    }
    if (left < n) {
        curr.push_back('(');
        backtrackGen(res, curr, left + 1, right, n);
        curr.pop_back();
    }
    if (right < left) {
        curr.push_back(')');
        backtrackGen(res, curr, left, right + 1, n);
        curr.pop_back();
    }
}
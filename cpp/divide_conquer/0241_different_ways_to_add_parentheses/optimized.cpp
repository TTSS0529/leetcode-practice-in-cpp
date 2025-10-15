#include "different_ways_to_add_parentheses.hpp"

vector<int> Solution::diffWaysToCompute(string expression) {
    static unordered_map<string, vector<int>>    memo;
    if (memo.count(expression)) return memo[expression];
    vector<int> res;
    for (size_t i = 0; i < expression.size(); ++i) {
        char    op = expression[i];
        if (op == '+' || op == '-' || op == '*') {
            vector<int> lefts = diffWaysToCompute(expression.substr(0, i));
            vector<int> rights = diffWaysToCompute(expression.substr(i + 1));
            for (const int& left : lefts) {
                for (const int& right : rights)
                switch (op) {
                    case '+':   res.push_back(left + right); break;
                    case '-':   res.push_back(left - right); break;
                    case '*':   res.push_back(left * right); break;
                }
            }
        }
    }
    if (res.empty()) {
        res.push_back(stoi(expression));
    }
    return memo[expression] = res;
}
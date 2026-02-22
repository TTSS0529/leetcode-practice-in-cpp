#include "evaluate_reverse_polish_notation.hpp"

int Solution::evalRPN(vector<string>& tokens) {
    stack<int>  st;
    bool    is_op{false};
    int index;
    int (*ops[4])(int, int) = {
        [](int a, int b) { return a + b; },
        [](int a, int b) { return a - b; },
        [](int a, int b) { return a * b; },
        [](int a, int b) { return a / b; }
    };
    for (const auto& token : tokens) {
        if (token == "+") {
            is_op = true;
            index = 0;
        } else if (token == "-") {
            is_op = true;
            index = 1;
        } else if (token == "*") {
            is_op = true;
            index = 2;
        } else if (token == "/") {
            is_op = true;
            index = 3;
        } else {
            st.push(atoi(token.c_str()));
        }
        if (is_op) {
            int second = st.top(); st.pop();
            int first = st.top(); st.pop();
            st.push(ops[index](first, second));
            is_op = false;
        }
    }
    return st.top();
}
#include "basic_calculator_ii.hpp"

int Solution::calculate(string s) {
    char    op = '+';
    int first = 0, second = 0, n = s.size(), i = 0;
    while (i < n) {
        if (s[i] != ' ') {
            int num = 0;
            while (i < n && isdigit(s[i])) {
                num = num * 10 + (s[i++] - '0');
            }
            switch(op) {
                case '+': first += second; second = num; break;
                case '-': first += second; second = -num; break;
                case '*': second *= num; break;
                case '/': second /= num; break;
            }
            if (i < n) op = s[i];
        }
        ++i;
    }
    return first + second;
}
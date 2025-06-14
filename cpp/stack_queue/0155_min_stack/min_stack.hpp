#pragma once

#include <iostream>
#include <stack>
#include <vector>

class MinStack {
public:
    MinStack();
    void push(int val);
    void pop();
    int top();
    int getMin();
private:
    std::stack<int> _data;
    std::stack<int> _min;
// private:
//     std::vector<int>    _data;
//     std::vector<int>    _min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
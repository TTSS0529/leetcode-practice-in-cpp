#pragma once

#include "../../simple_test.hpp"

class MyStack {
public:
    MyStack();
    
    void push(int x);
    
    int pop();
    
    int top();
    
    bool empty();
private:
    queue<int>  q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
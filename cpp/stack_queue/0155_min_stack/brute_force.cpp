#include "min_stack.hpp"

MinStack::MinStack() {
}

void MinStack::push(int val) {
    _data.push(val);
    if (_min.empty() || val <= _min.top()) {
        _min.push(val);
    }
}

void MinStack::pop() {
    if (_data.top() == _min.top()) {
        _min.pop();
    }
    _data.pop();
}

int MinStack::top() {
    return _data.top();
}

int MinStack::getMin() {
    return _min.top();
}
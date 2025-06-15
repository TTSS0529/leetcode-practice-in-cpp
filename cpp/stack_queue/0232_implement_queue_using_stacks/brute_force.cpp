#include "implement_queue_using_stacks.hpp"

MyQueue::MyQueue() {
}

void MyQueue::push(int x) {
    _first.push(x);
}

int MyQueue::pop() {
    int result = peek();
    _second.pop();
    return result;
}

int MyQueue::peek() {
    if (!_second.empty()) {
        return _second.top();
    }
    if (_first.empty()) {
        return -1;
    }
    while (!_first.empty()) {
        _second.push(_first.top());
        _first.pop();
    }
    return _second.top();
}

bool MyQueue::empty() {
    return _first.empty() && _second.empty();
}
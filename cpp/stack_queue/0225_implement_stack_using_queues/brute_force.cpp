#include "implement_stack_using_queues.hpp"

MyStack::MyStack() {}

void MyStack::push(int x) {
    q.push(x);
    int n = q.size();
    while (--n) {
        q.push(q.front());
        q.pop();
    }
}

int MyStack::pop() {
    int res = q.front();
    q.pop();
    return res;
}

int MyStack::top() {
    return q.front();
}

bool MyStack::empty() {
    return q.empty();
}
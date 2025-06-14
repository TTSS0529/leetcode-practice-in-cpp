// #include "min_stack.hpp"

// MinStack::MinStack() {
// }

// void MinStack::push(int val) {
//     _data.push_back(val);
//     if (_min.empty() || val <= _min.back()) {
//         _min.push_back(val);
//     }
// }

// void MinStack::pop() {
//     if (_data.back() == _min.back()) {
//         _min.pop_back();
//     }
//     _data.pop_back();
// }

// int MinStack::top() {
//     return _data.back();
// }

// int MinStack::getMin() {
//     return _min.back();
// }
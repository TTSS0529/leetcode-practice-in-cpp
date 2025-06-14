#include "min_stack.hpp"

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    MinStack    *test = new MinStack();
    test->push(-2);
    test->push(0);
    test->push(-3);
    std::cout << test->getMin() << std::endl;
    test->pop();
    std::cout << test->top() << std::endl;
    std::cout << test->getMin() << std::endl;
    delete test;

    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    test = new MinStack();
    test->push(0);
    test->push(1);
    test->push(0);
    std::cout << test->getMin() << std::endl;
    test->pop();
    std::cout << test->top() << std::endl;
    std::cout << test->getMin() << std::endl;
    delete test;

    return 0;
}
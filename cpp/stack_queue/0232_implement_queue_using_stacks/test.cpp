#include "implement_queue_using_stacks.hpp"

int main() {
    MyQueue *test = new MyQueue();
    test->push(1);
    test->push(2);
    std::cout << test->peek() << std::endl;
    std::cout << test->pop() << std::endl;
    std::cout << (test->empty() ? "true" : "false") << std::endl;

    return 0;
}
#include "validate_stack_sequences.hpp"

static void runTest(std::vector<int>& pushed, std::vector<int>& popped) {
    Solution    sol;
    std::cout << (sol.validateStackSequences(pushed, popped) ? "true" : "false") << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    std::vector<int>    pushed1 = {1, 2, 3, 4, 5};
    std::vector<int>    popped1 = {4, 5, 3, 2, 1};
    runTest(pushed1, popped1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    std::vector<int>    pushed2 = {1, 2, 3, 4, 5};
    std::vector<int>    popped2 = {4, 3, 5, 1, 2};
    runTest(pushed2, popped2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    std::vector<int>    pushed3 = {2, 1, 0};
    std::vector<int>    popped3 = {1, 2, 0};
    runTest(pushed3, popped3);

    return 0;
}
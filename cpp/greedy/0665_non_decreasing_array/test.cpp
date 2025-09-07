#include "non_decreasing_array.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << (sol.checkPossibility(nums) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{4, 2, 3};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{4, 2, 1};
    runTest(test2);

    return 0;
}
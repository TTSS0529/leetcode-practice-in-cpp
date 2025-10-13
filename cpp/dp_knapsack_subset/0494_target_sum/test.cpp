#include "target_sum.hpp"

static void runTest(vector<int>& nums, int target) {
    Solution    sol;
    cout << sol.findTargetSumWays(nums, target) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1,1,1,1,1};
    runTest(test1, 3);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{1};
    runTest(test2, 1);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{1,1,1,1};
    runTest(test3, -1000);

    return 0;
}
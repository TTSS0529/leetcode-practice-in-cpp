#include "two_sum.hpp"

static void runTest(vector<int>& nums, int target) {
    Solution    sol;
    vector<int> res = sol.twoSum(nums, target);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{2,7,11,15};
    runTest(test1, 9);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{3,2,4};
    runTest(test2, 6);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{3,3};
    runTest(test3, 6);

    return 0;
}
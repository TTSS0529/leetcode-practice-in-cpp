#include "running_sum_of_1d_array.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    vector<int> res = sol.runningSum(nums);
    printVecInt(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {1, 2, 3, 4};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {1, 1, 1, 1, 1};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3 = {3, 1, 2, 10, 1};
    runTest(test3);

    return 0;
}
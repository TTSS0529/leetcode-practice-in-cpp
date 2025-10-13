#include "maximum_subarray.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.maxSubArray(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {1};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3 = {5, 4, -1, 7, 8};
    runTest(test3);

    return 0;
}
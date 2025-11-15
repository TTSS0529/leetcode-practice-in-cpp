#include "subarray_sum_equals_k.hpp"

static void runTest(vector<int>& nums, int k) {
    Solution    sol;
    cout << sol.subarraySum(nums, k) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1,1,1};
    runTest(test1, 2);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,2,3};
    runTest(test2, 3);

    return 0;
}
#include "partition_equal_subset_sum.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << (sol.canPartition(nums) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1, 5, 11, 5};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{1, 2, 3, 5};
    runTest(test2);

    return 0;
}
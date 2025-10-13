#include "wiggle_subsequence.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.wiggleMaxLength(nums) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<int> test1{1,7,4,9,2,5};
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<int> test2{1,17,5,10,13,15,10,5,16,8};
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<int> test3{1,2,3,4,5,6,7,8,9};
    runTest(test3);

    return 0;
}
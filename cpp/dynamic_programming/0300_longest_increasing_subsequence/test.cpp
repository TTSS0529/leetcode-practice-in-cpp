#include "longest_increasing_subsequence.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.lengthOfLIS(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{10,9,2,5,3,7,101,18};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{0,1,0,3,2,3};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{7,7,7,7,7,7,7};
    runTest(test3);

    return 0;
}
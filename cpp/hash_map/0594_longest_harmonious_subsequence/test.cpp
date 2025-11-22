#include "longest_harmonious_subsequence.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.findLHS(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1,3,2,2,5,2,3,7};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,2,3,4};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1,1,1,1};
    runTest(test3);

    return 0;
}
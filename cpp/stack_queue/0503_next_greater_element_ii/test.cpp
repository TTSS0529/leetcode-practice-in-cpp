#include "next_greater_ekement_ii.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    vector<int> res = sol.nextGreaterElements(nums);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1,2,1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,2,3,4,3};
    runTest(test2);

    return 0;
}
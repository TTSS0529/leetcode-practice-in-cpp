#include "single_number_iii.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    vector<int> res = sol.singleNumber(nums);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1,2,1,3,2,5};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{-1,0};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{0,1};
    runTest(test3);

    return 0;
}
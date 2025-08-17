#include "product_of_array_except_self.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    vector<int> res = sol.productExceptSelf(nums);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1, 2, 3, 4};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{-1, 1, 0, -3, 3};
    runTest(test2);

    return 0;
}
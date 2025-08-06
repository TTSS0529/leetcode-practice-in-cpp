#include "single_number.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.singleNumber(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{2, 2, 1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{4, 1, 2, 1, 2};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1};
    runTest(test3);

    return 0;
}
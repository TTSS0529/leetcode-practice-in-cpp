#include "single_number_ii.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.singleNumber(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{2, 2, 3, 2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{0, 1, 0, 1, 0, 1, 99};
    runTest(test2);

    return 0;
}
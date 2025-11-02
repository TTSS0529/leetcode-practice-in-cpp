#include "missing_number.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.missingNumber(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{3, 0, 1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{0, 1};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{9,6,4,2,3,5,7,0,1};
    runTest(test3);

    return 0;
}
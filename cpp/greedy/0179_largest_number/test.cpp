#include "largest_number.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.largestNumber(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{10,2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{3,30,34,5,9};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{0, 0, 0};
    runTest(test3);

    return 0;
}
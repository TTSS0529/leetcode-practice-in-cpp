#include "degree_of_an_array.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.findShortestSubArray(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{1,2,2,3,1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1,2,2,3,1,4,2};
    runTest(test2);

    return 0;
}
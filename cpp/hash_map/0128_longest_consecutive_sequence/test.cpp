#include "longest_consecutive_sequence.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.longestConsecutive(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{100,4,200,1,3,2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{0,3,7,2,5,8,4,6,0,1};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1,0,1,2};
    runTest(test3);

    return 0;
}
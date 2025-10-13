#include "house_robber_ii.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.rob(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1{2, 3, 2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2{1, 2, 3, 1};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3{1, 2, 3};
    runTest(test3);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    vector<int> test4{1};
    runTest(test4);

    return 0;
}
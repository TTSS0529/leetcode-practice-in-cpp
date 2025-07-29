#include "house_robber.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    cout << sol.rob(nums) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {1, 2, 3, 1};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {2, 7, 9, 3, 1};
    runTest(test2);

    return 0;
}
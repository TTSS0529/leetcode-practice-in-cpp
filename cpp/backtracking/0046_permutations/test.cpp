#include "permutations.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    vector<vector<int>> res = sol.permute(nums);
    printMatrix(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {1, 2, 3};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {0, 1};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3 = {1};
    runTest(test3);

    return 0;
}
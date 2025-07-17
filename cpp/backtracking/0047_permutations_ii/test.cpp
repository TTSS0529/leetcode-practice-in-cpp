#include "permutations_ii.hpp"

static void runTest(vector<int>& nums) {
    Solution    sol;
    vector<vector<int>> res = sol.permuteUnique(nums);
    printMatrix(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {1, 1, 2};
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {1, 2, 3};
    runTest(test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3 = {1, 1, 1, 1, 4};
    runTest(test3);

    return 0;
}
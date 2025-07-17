#include "combination_sum.hpp"

static void runTest(vector<int>& candidates, int target) {
    Solution    sol;
    vector<vector<int>> res = sol.combinationSum(candidates, target);
    printMatrix(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {2, 3, 6, 7};
    runTest(test1, 7);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {2, 3, 5};
    runTest(test2, 8);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<int> test3 = {2};
    runTest(test3, 1);

    return 0;
}
#include "combination_sum_ii.hpp"

static void runTest(vector<int>& candidates, int target) {
    Solution    sol;
    vector<vector<int>> res = sol.combinationSum2(candidates, target);
    printMatrix(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> test1 = {10, 1, 2, 7, 6, 1, 5};
    runTest(test1, 8);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> test2 = {2, 5, 2, 1, 2};
    runTest(test2, 5);

    return 0;
}
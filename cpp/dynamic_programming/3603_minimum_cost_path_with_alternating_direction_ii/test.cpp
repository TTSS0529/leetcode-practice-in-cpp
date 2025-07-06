#include "minimum_cost_path_with_alternating_direction_ii.hpp"

static void runTest(int m, int n, vector<vector<int>>& waitCost) {
    Solution    sol;
    cout << "Input: m = " << m << ", n = " << n
        << ", waitCost = ";
    printMatrix(waitCost);
    cout << "Output: " << sol.minCost(m, n, waitCost) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1 = {
        {1, 2}
    };
    runTest(1, 2, test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test2 = {
        {3, 5},
        {2, 4}
    };
    runTest(2, 2, test2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test3 = {
        {6, 1, 4},
        {3, 2, 5},
    };
    runTest(2, 3, test3);

    return 0;
}
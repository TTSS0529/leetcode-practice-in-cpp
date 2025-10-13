#include "minimum_path_sum.hpp"

static void runTest(vector<vector<int>>& grid) {
    Solution    sol;
    cout << sol.minPathSum(grid) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1 = {
        {1,3,1},
        {1,5,1},
        {4,2,1}
    };
    runTest(test1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test2 = {
        {1,2,3},
        {4,5,6}
    };
    runTest(test2);

    return 0;
}
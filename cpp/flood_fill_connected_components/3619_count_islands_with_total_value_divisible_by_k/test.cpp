#include "count_islands_with_total_value_divisible_by_k.hpp"

static void runTest(vector<vector<int>>& grid, int k) {
    Solution    sol;
    cout << sol.countIslands(grid, k) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1 = {
        {0,2,1,0,0},
        {0,5,0,0,5},
        {0,0,1,0,0},
        {0,1,4,7,0},
        {0,2,0,0,8}
    };
    runTest(test1, 5);

    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test2 = {
        {3,0,3,0},
        {0,3,0,3},
        {3,0,3,0}
    };
    runTest(test2, 3);

    return 0;
}
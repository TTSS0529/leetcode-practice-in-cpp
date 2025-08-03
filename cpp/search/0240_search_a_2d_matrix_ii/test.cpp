#include "search_a_2d_matrix_ii.hpp"

static void runTest(vector<vector<int>>& matrix, int target) {
    Solution    sol;
    cout << (sol.searchMatrix(matrix, target) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1{
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    runTest(test1, 5);
    
    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, 20);

    return 0;
}
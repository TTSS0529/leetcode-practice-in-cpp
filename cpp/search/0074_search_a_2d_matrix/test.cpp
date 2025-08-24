#include "search_a_2d_matrix.hpp"

static void runTest(vector<vector<int>>& matrix, int target) {
    Solution    sol;
    cout << (sol.searchMatrix(matrix, target) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1{
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    runTest(test1, 3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, 13);

    return 0;
}
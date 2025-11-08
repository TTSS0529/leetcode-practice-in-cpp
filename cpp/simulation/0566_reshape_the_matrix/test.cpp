#include "reshape_the_matrix.hpp"

static void runTest(vector<vector<int>>& mat, int r, int c) {
    Solution    sol;
    vector<vector<int>> res = sol.matrixReshape(mat, r, c);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test1{
        {1,2},{3,4}
    };
    runTest(test1, 1, 4);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(test1, 2, 4);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<vector<int>> test3{
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
    };
    runTest(test3, 2, 8);

    return 0;
}
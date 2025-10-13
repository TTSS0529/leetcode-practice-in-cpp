#include "maximal_square.hpp"

static void runTest(vector<vector<char>>& matrix) {
    Solution    sol;
    cout << sol.maximalSquare(matrix) << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<char>>    test1{
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<char>>    test2{{'0','1'},{'1','0'}};
    runTest(test2);

    std::cout << ">>>>>> example 3 <<<<<<" << std::endl;
    vector<vector<char>>    test3{{'0'}};
    runTest(test3);

    return 0;
}
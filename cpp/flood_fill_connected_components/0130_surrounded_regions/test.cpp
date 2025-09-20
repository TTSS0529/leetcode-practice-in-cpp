#include "surrounded_regions.hpp"

static void runTest(vector<vector<char>>& board) {
    Solution    sol;
    sol.solve(board);
    printVec(board);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<vector<char>>    test1{
        {'X','X','X','X'},
        {'X','O','O','X'},
        {'X','X','O','X'},
        {'X','O','X','X'}
    };
    runTest(test1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    vector<vector<char>>    test2{
        {'X'}
    };
    runTest(test2);
}
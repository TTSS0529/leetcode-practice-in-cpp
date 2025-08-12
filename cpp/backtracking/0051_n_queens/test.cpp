#include "n_queens.hpp"

static void runTest(int n) {
    Solution    sol;
    vector<vector<string>>  res = sol.solveNQueens(n);
    for (const auto& line : res) {
        printVec(line);
    }
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(4);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(1);

    return 0;
}
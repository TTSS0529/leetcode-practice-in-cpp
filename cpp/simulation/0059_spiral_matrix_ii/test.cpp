#include "spiral_matrix_ii.hpp"

static void runTest(int n) {
    Solution    sol;
    std::vector<std::vector<int>>   result = sol.generateMatrix(n);
    std::cout << "[";
    for (int i = 0; i < n; ++i) {
        std::cout << "[";
        for (int j = 0; j < n; ++j) {
            std::cout << result[i][j];
            if (j != n - 1) {
                std::cout << ",";
            }
        }
        std::cout << "]";
        if (i != n - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    runTest(3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(1);

    return 0;
}
#include "spiral_matrix.hpp"

static void runTest(std::vector<std::vector<int>>& matrix) {
    Solution    sol;
    std::vector<int>    result = sol.spiralOrder(matrix);
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    std::vector<std::vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    runTest(matrix1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    std::vector<std::vector<int>> matrix2 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    runTest(matrix2);

    return 0;
}
#include "rotate_image.hpp"

static void runTest(std::vector<std::vector<int>>& matrix) {
    Solution    sol;
    sol.rotate(matrix);
    printMatrix(matrix);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    std::vector<std::vector<int>>   matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    runTest(matrix1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    std::vector<std::vector<int>>   matrix2 = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };
    runTest(matrix2);

    return 0;
}
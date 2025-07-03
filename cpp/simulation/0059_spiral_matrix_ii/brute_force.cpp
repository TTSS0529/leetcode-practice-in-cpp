#include "spiral_matrix_ii.hpp"

std::vector<std::vector<int>>   Solution::generateMatrix(int n) {
    std::vector<std::vector<int>>   matrix(n);
    for (auto& vec : matrix) {
        vec.resize(n);
    }
    int up = 0, left = 0, down = n - 1, right = n - 1, element = 0;
    while (true) {
        for (int i = left; i <= right; ++i)
            matrix[up][i] = ++element;
        if (++up > down)
            break ;
        for (int i = up; i <= down; ++i)
            matrix[i][right] = ++element;
        if (left > --right)
            break ;
        for (int i = right; i >= left; --i)
            matrix[down][i] = ++element;
        if (up > --down)
            break ;
        for (int i = down; i >= up; --i)
            matrix[i][left] = ++element;
        if (++left > right)
            break ;
    }
    return matrix;
}
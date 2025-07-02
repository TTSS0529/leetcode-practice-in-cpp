#include "spiral_matrix.hpp"

std::vector<int> Solution::spiralOrder(std::vector<std::vector<int>>& matrix) {
    std::vector<int>    spiral;
    spiral.reserve(matrix.size() * matrix[0].size());
    int up = 0, down = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    while (true) {
        for (int i = left; i <= right; ++i) {
            spiral.push_back(matrix[up][i]);
        }
        if (++up > down) {
            break ;
        }
        for (int i = up; i <= down; ++i) {
            spiral.push_back(matrix[i][right]);
        }
        if (left > --right) {
            break ;
        }
        for (int i = right; i >= left; --i) {
            spiral.push_back(matrix[down][i]);
        }
        if (up > --down) {
            break ;
        }
        for (int i = down; i >= up; --i) {
            spiral.push_back(matrix[i][left]);
        }
        if (++left > right) {
            break ;
        }
    }
    return spiral;
}
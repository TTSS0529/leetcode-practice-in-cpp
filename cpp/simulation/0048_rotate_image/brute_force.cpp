#include "rotate_image.hpp"

void    Solution::rotate(std::vector<std::vector<int>>& matrix) {
    size_t  len = matrix.size();
    for (size_t i = 0; i < len; ++i) {
        for (size_t j = 0; j < i; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (size_t i = 0; i < len; ++i) {
        for (size_t j = 0; j < len / 2; ++j) {
            std::swap(matrix[i][j], matrix[i][len - j - 1]);
        }
    }
}
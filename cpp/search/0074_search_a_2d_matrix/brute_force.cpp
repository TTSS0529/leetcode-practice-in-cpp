#include "search_a_2d_matrix.hpp"

bool Solution::searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = m * n;
    while (left < right) {
        int middle = left + (right - left) / 2;
        int x = middle / n, y = middle % n;
        if (matrix[x][y] > target) right = middle;
        else if (matrix[x][y] < target) left = middle + 1;
        else return true;
    }
    return false;
}
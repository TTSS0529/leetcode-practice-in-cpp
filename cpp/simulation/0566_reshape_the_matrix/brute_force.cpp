#include "reshape_the_matrix.hpp"

vector<vector<int>> Solution::matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size(), n = mat[0].size();
    if (m * n != r * c) return mat;
    vector<vector<int>> res(r, vector<int>(c));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int pos = i * n + j;
            res[pos / c][pos % c] = mat[i][j];
        }
    }
    return res;
}
#include "simple_test.hpp"

/**
 * @brief Print a 2D integer matrix to standard output in nested list format.
 * 
 * The output format is: [[a11,a12,...],[a21,a22,...],...]
 * Each row is printed as a comma-separated list inside square brackets.
 * Rows are separated by commas as well.
 * 
 * @param matrix Reference to the 2D vector<int> to print.
 */
void    printMatrix(vector<vector<int>>& matrix) {
    cout << "[";
    for (size_t i = 0; i < matrix.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j];
            if (j != matrix[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != matrix.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}
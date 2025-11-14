#pragma once

#include "../../simple_test.hpp"

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix);
    
    int sumRegion(int row1, int col1, int row2, int col2);
private:
    vector<vector<int>> _integral;
};
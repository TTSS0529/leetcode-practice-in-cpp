#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cctype>
#include <limits>
#include <algorithm>

using   namespace   std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void    printMatrix(vector<vector<int>>& matrix);
#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <unordered_set>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <climits>
#include <utility>
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
#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <unordered_set>
#include <unordered_map>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <limits>
#include <climits>
#include <utility>
#include <algorithm>
#include <optional>// c++17

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

/**
 * @brief Print a 1D vector of any printable type to a specified output stream in list format.
 * 
 * Prints the elements of a std::vector<T> as a comma-separated list enclosed in square brackets:
 * 
 * [x1,x2,x3,...]
 * 
 * No extra spaces or trailing commas are printed.
 * 
 * @tparam T Element type of the vector (must support operator<< to std::ostream).
 * @param nums Reference to the vector to print (not modified).
 * @param os Output stream to write to (default: std::cout).
 */
template<typename T>
void        printVec(const vector<T>& nums, ostream& os = cout) {
    os << "[";
    for (size_t i = 0; i < nums.size(); ++i) {
        os << nums[i];
        if (i != nums.size() - 1) {
            os << ",";
        }
    }
    os << "]" << endl;
}

void        printMatrix(vector<vector<int>>& matrix);

void        printTreeByLevel(TreeNode *root);
TreeNode    *creatBinaryTree(vector<optional<int>>& nodes);
void        freeBinaryTree(TreeNode *root);
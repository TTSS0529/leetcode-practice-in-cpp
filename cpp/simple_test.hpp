#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <array>
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
#include <numeric>
#include <type_traits>
#include <optional>// c++17

using   namespace   std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode    *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

template<typename T>
struct  is_vector : false_type {};

template<typename...Args>
struct  is_vector<vector<Args...>> : true_type {};

template<typename T>
struct  is_vector_nocvref : is_vector<remove_cv_t<remove_reference_t<T>>> {};

/**
 * @brief Recursively print a std::vector (including nested vectors) in list format.
 *
 * This function prints the contents of a std::vector<T> to a given output stream,
 * supporting any level of nesting (e.g., vector<vector<int>>, vector<vector<vector<double>>>, etc.).
 * It can output in either compact or pretty-printed (indented) mode, with a customizable delimiter.
 *
 * Output format (compact mode example):
 * [1, 2, 3]
 * [[1, 3, 5], [2, 4, 6]]
 *
 * Output format (pretty mode example):
 * [
 *   [1, 3, 5],
 *   [2, 4, 6]
 * ]
 *
 * @tparam T Element type of the vector. If T itself is a vector, the function will recurse automatically.
 *           The element type must be printable via operator<< to std::ostream.
 * @param nums Reference to the vector to print (not modified).
 * @param os Output stream to write to (default: std::cout).
 * @param pretty If true, enables multi-line indented printing for nested vectors (default: false).
 * @param delimiter String used to separate elements in compact mode (default: ", ").
 * @param indent Current indentation level (in spaces) used for pretty mode. 
 *               Normally only set internally during recursion (default: 0).
 */
template<typename T>
void    printVec(const vector<T>& nums, ostream& os = cout,
            bool pretty = false, const string& delimiter = ", ", int indent = 0) {
    string  ind = pretty ? string(indent, ' ') : "";
    os << ind << "[";
    if constexpr (is_vector_nocvref<T>::value) {
        if (pretty) os << "\n";
        size_t  cnt = 0;
        for (const auto& n : nums) {
            printVec(n, os, pretty, delimiter, indent + 2);
            if (cnt != nums.size() - 1) os << (pretty ? "," : ", ");
            if (pretty)  os << "\n";
            ++cnt;
        }
        os << ind << "]";
    } else {
        size_t  cnt = 0;
        for (auto n : nums) {
            os << n;
            if (cnt != nums.size() - 1) os << delimiter;
            ++cnt;
        }
        os << "]";
    }
}

void        printMatrix(vector<vector<int>>& matrix);

void        printTreeByLevel(TreeNode *root);
TreeNode    *creatBinaryTree(vector<optional<int>>& nodes);
void        freeBinaryTree(TreeNode *root);
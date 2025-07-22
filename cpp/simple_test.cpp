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

/**
 * @brief Print a binary tree in level-order (BFS) traversal format.
 *
 * This function performs a breadth-first search (level-order traversal) on the
 * given binary tree and prints node values in a single list format.
 * The output format is: [v1,v2,v3,...], where nodes are visited from top to bottom,
 * left to right. Null children are skipped (only existing nodes are printed).
 *
 * Example:
 *      Input Tree:
 *          1
 *         / \
 *        2   3
 *           / \
 *          4   5
 *
 *      Output:
 *          [1,2,3,4,5]
 *
 * @param root Pointer to the root node of the binary tree.
 */
void    printTreeByLevel(TreeNode *root) {
    if (!root) {
        return;
    }
    queue<TreeNode *>   q;
    q.push(root);
    cout << "[";
    while (!q.empty()) {
        TreeNode    *tmp = q.front();
        q.pop();
        if (tmp->left) {
            q.push(tmp->left);
        }
        if (tmp->right) {
            q.push(tmp->right);
        }
        cout << tmp->val;
        if (!q.empty()) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}
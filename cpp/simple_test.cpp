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
 * left to right. Null children are shown as "null", but trailing nulls are trimmed.
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
 *          [1,2,3,null,null,4,5]
 *
 * @param root Pointer to the root node of the binary tree.
 */
void    printTreeByLevel(TreeNode *root) {
    if (!root) {
        cout << "[]" << endl;
        return;
    }
    queue<TreeNode *>   q;
    q.push(root);
    cout << "[";
    while (!q.empty()) {
        TreeNode    *tmp = q.front();
        q.pop();
        if (tmp) {
            q.push(tmp->left);
            q.push(tmp->right);
            cout << tmp->val;
        } else {
            q.push(nullptr);
            q.push(nullptr);
            cout << "null";
        }
        queue<TreeNode *>   copy = q;
        bool    allNull = true;
        while (!copy.empty()) {
            if (copy.front()) {
                allNull = false;
                break;
            }
            copy.pop();
        }
        if (allNull) {
            break;
        } else {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

static TreeNode* buildTreeDFS(const vector<optional<int>>& nodes, int index) {
    if (index >= static_cast<int>(nodes.size()) || !nodes[index].has_value()) 
        return nullptr;

    TreeNode* root = new TreeNode(nodes[index].value());
    root->left  = buildTreeDFS(nodes, 2 * index + 1);
    root->right = buildTreeDFS(nodes, 2 * index + 2);
    return root;
}

/**
 * @brief Build a binary tree from a level-order vector using index-based DFS.
 * 
 * The input vector represents a binary tree in level-order form, where `nullopt` indicates
 * a missing node. Children are determined by array indices:
 *   - left child  = 2 * index + 1
 *   - right child = 2 * index + 2
 * 
 * This method supports sparse trees without requiring trailing nullopt padding.
 * Returns nullptr if the input is empty or the node at the given index is nullopt.
 * 
 * @param nodes Level-order vector of optional<int>, where nullopt represents an empty node.
 * @return Pointer to the root of the constructed binary tree, or nullptr if empty.
 */
TreeNode    *creatBinaryTree(vector<optional<int>>& nodes) {
    return buildTreeDFS(nodes, 0);
}

/**
 * @brief Recursively frees all nodes in a binary tree.
 * 
 * Performs a post-order traversal to delete every node and free memory.
 * Safely handles nullptr (empty tree).
 * 
 * @param root Pointer to the root node of the binary tree.
 */
void    freeBinaryTree(TreeNode *root) {
    if (!root) return;
    freeBinaryTree(root->left);
    freeBinaryTree(root->right);
    delete(root);
}

void    printLinkedlist(ListNode *root) {
    cout << "[";
    while (root) {
        cout << root->val;
        if (root->next) {
            cout << "->";
        }
        root = root->next;
    }
    cout << "]" << endl;
}
#include "binary_tree_preorder_traversal.hpp"

vector<int> Solution::preorderTraversal(TreeNode* root) {
    if (!root) return {};
    vector<int> res;
    stack<TreeNode*>    s;
    s.push(root);
    while (!s.empty()) {
        TreeNode    *curr = s.top();
        s.pop();
        res.push_back(curr->val);
        if (curr->right) s.push(curr->right);
        if (curr->left) s.push(curr->left);
    }
    return res;
}
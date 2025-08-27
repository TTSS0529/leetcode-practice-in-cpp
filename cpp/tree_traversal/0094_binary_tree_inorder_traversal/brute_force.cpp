#include "binary_tree_inorder_traversal.hpp"

vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> res;
    dfsInorder(root, res);
    return res;
}

void    Solution::dfsInorder(TreeNode *root, vector<int>& res) {
    if (!root) return;
    dfsInorder(root->left, res);
    res.push_back(root->val);
    dfsInorder(root->right, res);
}
#include "binary_tree_paths.hpp"

vector<string> Solution::binaryTreePaths(TreeNode* root) {
    vector<string>  res;
    dfsFind(root, res, to_string(root->val));
    return res;
}

void    Solution::dfsFind(TreeNode *root, vector<string>& res, string path) {
    if (!root) return;
    if (!root->left && !root->right) {
        res.push_back(path);
        return;
    }
    if (root->left) dfsFind(root->left, res, path + "->" + to_string(root->left->val));
    if (root->right) dfsFind(root->right, res, path + "->" + to_string(root->right ->val));
}
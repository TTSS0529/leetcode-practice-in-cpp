#include "delete_nodes_and_return_forest.hpp"

vector<TreeNode*> Solution::delNodes(TreeNode* root, vector<int>& to_delete) {
    vector<TreeNode*>   forest;
    unordered_set<int>  dict(to_delete.begin(), to_delete.end());
    root = helper(root, forest, dict);
    if (root) forest.push_back(root);
    return forest;
}

TreeNode    *Solution::helper(TreeNode *node, vector<TreeNode*>& forest,
    unordered_set<int>& dict) {
    if (!node) return node;
    node->left = helper(node->left, forest, dict);
    node->right = helper(node->right, forest, dict);
    if (dict.find(node->val) != dict.end()) {
        if (node->left) forest.push_back(node->left);
        if (node->right) forest.push_back(node->right);
        node = nullptr;        
    }
    return node;
}
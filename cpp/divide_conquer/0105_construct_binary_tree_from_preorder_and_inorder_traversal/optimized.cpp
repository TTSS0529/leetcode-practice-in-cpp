#include "construct_binary_tree_from_preorder_and_inorder_traversal.hpp"

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
    vector<int> dic(6000, -1);
    int len = inorder.size();
    for (int i = 0; i < len; ++i) {
        dic[inorder[i] + 3000] = i;
    }
    return recurBuild(0, 0, len - 1, preorder, dic);
}

TreeNode    *Solution::recurBuild(int root, int left, int right, vector<int>& preorder,
                vector<int>& dic) {
    if (left > right) return nullptr;
    TreeNode    *node = new TreeNode(preorder[root]);
    int i = dic[preorder[root] + 3000];
    node->left = recurBuild(root + 1, left, i - 1, preorder, dic);
    node->right = recurBuild(root + 1 + i - left, i + 1, right, preorder, dic);
    return node;
}
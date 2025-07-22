#include "symmetric_tree.hpp"

bool Solution::isSymmetric(TreeNode* root) {
    if (!root) {
        return true;
    }
    return dfsCheck(root->left, root->right);
}

bool    Solution::dfsCheck(TreeNode *le, TreeNode *ri) {
    if (!le && !ri) {
        return true;
    }
    if (!le || !ri || le->val != ri->val) {
        return false;
    }
    return dfsCheck(le->left, ri->right) && dfsCheck(le->right, ri->left);
}
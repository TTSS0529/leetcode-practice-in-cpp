#include "symmetric_tree.hpp"

bool Solution::isSymmetric(TreeNode* root) {
    if (!root) {
        return true;
    }
    queue<pair<TreeNode *, TreeNode *>> q;
    q.push({root->left, root->right});
    while (!q.empty()) {
        auto    [le, ri] = q.front();
        q.pop();
        if (!le && !ri) {
            continue;
        }
        if (!le || !ri || le->val != ri->val) {
            return false;
        }
        q.push({le->left, ri->right});
        q.push({le->right, ri->left});
    }
    return true;
}
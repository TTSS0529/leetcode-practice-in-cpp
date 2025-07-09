#include "binary_tree_level_order_traversal.hpp"

vector<vector<int>> Solution::levelOrder(TreeNode* root) {
    if (!root) {
        return {};
    }
    queue<TreeNode *>   que;
    vector<vector<int>> res;
    que.push(root);
    while (!que.empty()) {
        vector<int> tmp;
        for (size_t i = que.size(); i > 0; --i) {
            root = que.front();
            que.pop();
            tmp.push_back(root->val);
            if (root->left) {
                que.push(root->left);
            }
            if (root->right) {
                que.push(root->right);
            }
        }
        res.push_back(tmp);
    }
    return res;
}
#include "binary_tree_zigzag_level_order_traversal.hpp"

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode* root) {
    if (!root) {
        return {};
    }
    queue<TreeNode *>   que;
    que.push(root);
    vector<vector<int>> res;
    int flag = 1;
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
        if (flag < 0) {
            reverse(tmp.begin(), tmp.end());
        }
        res.push_back(tmp);
        flag = -flag;
    }
    return res;
}
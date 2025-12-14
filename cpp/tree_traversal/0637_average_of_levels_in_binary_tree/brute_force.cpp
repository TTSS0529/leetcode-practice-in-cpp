#include "average_of_levels_in_binary_tree.hpp"

vector<double> Solution::averageOfLevels(TreeNode* root) {
    if (!root)  return {};
    vector<double>  res;
    queue<TreeNode*>    bfs;
    bfs.push(root);
    while (!bfs.empty()) {
        int count = bfs.size();
        double  sum = 0;
        for (int i = 0; i < count; ++i) {
            TreeNode    *curr = bfs.front();
            bfs.pop();
            sum += curr->val;
            if (curr->left) bfs.push(curr->left);
            if (curr->right) bfs.push(curr->right);
        }
        res.push_back(sum / count);
    }
    return res;
}
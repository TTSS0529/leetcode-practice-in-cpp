#include "serialize_and_deserialize_binary_tree.hpp"

string Codec::serialize(TreeNode* root) {
    if (!root) return "#,";
    return to_string(root->val) + "," +
        serialize(root->left) + serialize(root->right);
}

TreeNode* Codec::deserialize(string data) {
    istringstream    ss(data);
    return preorderBuild(ss);
}

TreeNode    *Codec::preorderBuild(istringstream& ss) {
    string  token;
    getline(ss, token, ',');
    if (token == "#") return nullptr;
    TreeNode    *root = new TreeNode(stoi(token));
    root->left = preorderBuild(ss);
    root->right = preorderBuild(ss);
    return root;
}
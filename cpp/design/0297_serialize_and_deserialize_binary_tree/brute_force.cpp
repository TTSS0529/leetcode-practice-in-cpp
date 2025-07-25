#include "serialize_and_deserialize_binary_tree.hpp"

string Codec::serialize(TreeNode* root) {
    if (!root) return "[]";
    string  res("[");
    queue<TreeNode *>   q;
    q.push(root);
    while (!q.empty()) {
        TreeNode    *node = q.front();
        q.pop();
        if (node) {
            res += to_string(node->val);
            q.push(node->left);
            q.push(node->right);
        } else {
            res += "null";
        }
        queue<TreeNode *>   tmp = q;
        bool    isAllNull = true;
        while (!tmp.empty()) {
            if (tmp.front()) {
                isAllNull = false;
                break;
            }
            tmp.pop();
        }
        if (isAllNull) {
            break;
        } else {
            res += ",";
        }
    }
    res += "]";
    return res;
}

TreeNode* Codec::deserialize(string data) {
    if (data == "[]") return nullptr;
    string  dataTrim = data.substr(1, data.size() - 2);
    vector<string>  vs = split(dataTrim, ',');
    TreeNode    *root = new TreeNode(stoi(vs[0]));
    queue<TreeNode *>   q;
    q.push(root);
    int i = 1, len = vs.size();
    while (!q.empty() && i < len) {
        TreeNode    *node = q.front();
        q.pop();
        if (i < len && vs[i] != "null") {
            node->left = new TreeNode(stoi(vs[i]));
            q.push(node->left);
        }
        ++i;
        if (i < len && vs[i] != "null") {
            node->right = new TreeNode(stoi(vs[i]));
            q.push(node->right);
        }
        ++i;
    }
    return root;
}

vector<string>  Codec::split(const string& data, char delimiter) {
    vector<string>  res;
    int start = 0;
    auto    pos = data.find(delimiter, start);
    while(pos != string::npos) {
        res.push_back(data.substr(start, pos - start));
        start = pos + 1;
        pos = data.find(delimiter, start);
    }
    res.push_back(data.substr(start));
    return res;
}
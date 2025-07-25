#pragma once

#include "../../simple_test.hpp"

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root);
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data);
private:
    vector<string>  split(const string& data, char delimiter);// brute_force
    TreeNode    *preorderBuild(istringstream& ss);// optimized
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
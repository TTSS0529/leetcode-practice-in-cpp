#include "serialize_and_deserialize_binary_tree.hpp"

static void runTest(TreeNode* root) {
    Codec   sol;
    cout << "Serialize: " << endl;
    string  res = sol.serialize(root);
    cout << res << endl;
    cout << "Deserialize: " << endl;
    TreeNode    *result = sol.deserialize(res);
    printTreeByLevel(result);
    freeBinaryTree(result);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1 = {1, 2, 3, nullopt, nullopt, 4, 5};
    TreeNode    *root = creatBinaryTree(test1);
    runTest(root);
    freeBinaryTree(root);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    return 0;
}
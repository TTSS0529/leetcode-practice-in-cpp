#include "delete_nodes_and_return_forest.hpp"

static void runTest(TreeNode* root, vector<int>& to_delete) {
    Solution    sol;
    vector<TreeNode*>   res = sol.delNodes(root, to_delete);
    cout << "[" << endl;
    for (const auto& p : res) {
        printTreeByLevel(p);
    }
    cout << "]" << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{1,2,3,4,5,6,7};
    TreeNode    *root = creatBinaryTree(test1);
    vector<int> to_delete1{3,5};
    runTest(root, to_delete1);
    freeBinaryTree(root);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{1,2,4,nullopt,3};
    root = creatBinaryTree(test2);
    vector<int> to_delete2{3};
    runTest(root, to_delete2);
    freeBinaryTree(root);

    return 0;
}
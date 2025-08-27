#include "binary_tree_inorder_traversal.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    vector<int> res = sol.inorderTraversal(root);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{1, nullopt, 2, nullopt, nullopt, 3};
    TreeNode    *root1 = creatBinaryTree(test1);
    runTest(root1);
    freeBinaryTree(root1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{1, 2, 3, 4, 5, nullopt, 8, nullopt,
        nullopt, 6, 7, nullopt, nullopt, 9};
    TreeNode    *root2 = creatBinaryTree(test2);
    runTest(root2);
    freeBinaryTree(root2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    TreeNode    root4(1);
    runTest(&root4);

    return 0;
}
#include "binary_tree_preorder_traversal.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    vector<int> res = sol.preorderTraversal(root);
    printVec(res);
    cout << "\n";
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{1,nullopt,2,nullopt,nullopt,3};
    TreeNode    *root = creatBinaryTree(test1);
    runTest(root);
    freeBinaryTree(root);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{1,2,3,4,5,nullopt,8,nullopt,nullopt,6,7,nullopt,nullopt,9};
    root = creatBinaryTree(test2);
    runTest(root);
    freeBinaryTree(root);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    TreeNode    a1(1);
    runTest(&a1);

    return 0;
}
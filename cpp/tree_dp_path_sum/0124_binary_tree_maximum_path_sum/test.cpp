#include "binary_tree_maximum_path_sum.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    cout << sol.maxPathSum(root) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{1, 2, 3};
    TreeNode    *root1 = creatBinaryTree(test1);
    runTest(root1);
    freeBinaryTree(root1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{-10, 9, 20, nullopt, nullopt, 15, 7};
    TreeNode    *root2 = creatBinaryTree(test2);
    runTest(root2);
    freeBinaryTree(root2);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test3{5, 4, 8, 11, nullopt, 13, 4, 7, 2,
        nullopt, nullopt, nullopt, nullopt, nullopt, 1};
    TreeNode    *root3 = creatBinaryTree(test3);
    runTest(root3);
    freeBinaryTree(root3);

    std::cout << ">>>>>>>>>> example 4 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test4{-1, -2, 10, -6, nullopt, -3, -6};
    TreeNode    *root4 = creatBinaryTree(test4);
    runTest(root4);
    freeBinaryTree(root4);

    return 0;
}
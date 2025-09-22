#include "binary_tree_paths.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    vector<string>  res = sol.binaryTreePaths(root);
    printVec(res);
    cout << endl;
}

int main() {
    std::cout << ">>>>>> example 1 <<<<<<" << std::endl;
    vector<optional<int>>   test1{1, 2, 3, nullopt, 5};
    TreeNode    *root1 = creatBinaryTree(test1);
    runTest(root1);
    freeBinaryTree(root1);

    std::cout << ">>>>>> example 2 <<<<<<" << std::endl;
    TreeNode    root2(1);
    runTest(&root2);

    return 0;
}
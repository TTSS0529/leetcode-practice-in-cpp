#include "balanced_binary_tree.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    cout << (sol.isBalanced(root) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1 = {3, 9, 20, nullopt, nullopt, 15, 7};
    TreeNode    *tree = creatBinaryTree(test1);
    runTest(tree);
    freeBinaryTree(tree);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2 = {1, 2, 2, 3, 3, nullopt, nullopt, 4, 4};
    tree = creatBinaryTree(test2);
    runTest(tree);
    freeBinaryTree(tree);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    return 0;
}

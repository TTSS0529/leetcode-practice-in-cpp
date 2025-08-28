#include "validate_binary_search_tree.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    cout << (sol.isValidBST(root) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{2, 1, 3};
    TreeNode    *root1 = creatBinaryTree(test1);
    runTest(root1);
    freeBinaryTree(root1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{5, 1, 4, nullopt, nullopt, 3, 6};
    TreeNode    *root2 = creatBinaryTree(test2);
    runTest(root2);
    freeBinaryTree(root2);

    return 0;
}
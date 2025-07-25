#include "construct_binary_tree_from_preorder_and_inorder_traversal.hpp"

static void runTest(vector<int>& preorder, vector<int>& inorder) {
    Solution    sol;
    TreeNode    *res = sol.buildTree(preorder, inorder);
    printTreeByLevel(res);
    freeBinaryTree(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<int> p1 = {3, 9, 20, 15, 7}, i1 = {9, 3, 15, 20, 7};
    runTest(p1, i1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<int> p2 = {-1}, i2 = {-1};
    runTest(p2, i2);

    return 0;
}
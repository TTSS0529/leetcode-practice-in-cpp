#include "binary_tree_zigzag_level_order_traversal.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    vector<vector<int>> res = sol.zigzagLevelOrder(root);
    printMatrix(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    TreeNode    a1(3), a2(9), a3(20), a4(15), a5(7);
    a1.left = &a2;
    a1.right = &a3;
    a3.left = &a4;
    a3.right = &a5;
    runTest(&a1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    TreeNode    b1(1);
    runTest(&b1);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    return 0;
}
#include "invert_binary_tree.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    TreeNode    *res = sol.invertTree(root);
    printTreeByLevel(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    TreeNode    a1(1), a2(3), a3(6), a4(9), a5(2, &a1, &a2);
    TreeNode    a6(7, &a3, &a4), a7(4, &a5, &a6);
    runTest(&a7);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    TreeNode    b1(1), b2(3), b3(2, &b1, &b2);
    runTest(&b3);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    runTest(nullptr);

    return 0;
}
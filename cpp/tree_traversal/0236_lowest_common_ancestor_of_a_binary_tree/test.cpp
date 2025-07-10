#include "lowest_common_ancestor_of_a_binary_tree.hpp"

static void runTest(TreeNode* root, TreeNode* p, TreeNode* q) {
    Solution    sol;
    TreeNode    *res = sol.lowestCommonAncestor(root, p, q);
    cout << res->val << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    TreeNode    a1(3), a2(5), a3(1), a4(6), a5(2), a6(0), a7(8), a8(7), a9(4);
    a1.left = &a2;
    a1.right = &a3;
    a2.left = &a4;
    a2.right = &a5;
    a3.left = &a6;
    a3.right = &a7;
    a5.left = &a8;
    a5.right = &a9;
    runTest(&a1, &a2, &a3);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    runTest(&a1, &a2, &a9);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    TreeNode    b1(1), b2(2);
    b1.left = &b2;
    runTest(&b1, &b1, &b2);

    return 0;
}
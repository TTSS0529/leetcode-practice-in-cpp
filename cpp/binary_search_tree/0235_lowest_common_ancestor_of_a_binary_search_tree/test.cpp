#include "lowest_common_ancestor_of_a_binary_search_tree.hpp"

static void runTest(TreeNode* root, TreeNode* p, TreeNode* q) {
    Solution    sol;
    cout << sol.lowestCommonAncestor(root, p, q)->val << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    TreeNode    a1(6), a2(2), a3(8), a4(0), a5(4), a6(7), a7(9), a8(3), a9(5);
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
    runTest(&a1, &a2, &a5);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    TreeNode    b1(2), b2(1);
    b1.left = &b2;
    runTest(&b1, &b1, &b2);

    return 0;
}
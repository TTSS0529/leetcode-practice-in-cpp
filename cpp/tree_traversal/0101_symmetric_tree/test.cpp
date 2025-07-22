#include "symmetric_tree.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    cout << (sol.isSymmetric(root) ? "true" : "false") << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    TreeNode    a1(3), a2(4), a3(4), a4(3), a5(2, &a1, &a2);
    TreeNode    a6(2, &a3, &a4), a7(1, &a5, &a6);
    runTest(&a7);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    TreeNode    b1(3), b2(3), b3(2, nullptr, &b1);
    TreeNode    b4(2, nullptr, &b2), b5(1, &b3, &b4);
    runTest(&b5);

    return 0;
}
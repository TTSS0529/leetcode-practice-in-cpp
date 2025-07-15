#include "maximum_depth_of_binary_tree.hpp"

static void runTest(TreeNode* root) {
    Solution    sol;
    cout << sol.maxDepth(root) << endl;
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
    TreeNode    b1(1), b2(2);
    b1.right = &b2;
    runTest(&b1);

    return 0;
}
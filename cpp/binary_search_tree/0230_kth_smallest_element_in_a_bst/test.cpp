#include "kth_smallest_element_in_a_bst.hpp"

static void runTest(TreeNode* root, int k) {
    Solution    sol;
    cout << sol.kthSmallest(root, k) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    TreeNode    a1(3), a2(1), a3(4), a4(2);
    a1.left = &a2;
    a1.right = &a3;
    a2.right = &a4;
    runTest(&a1, 1);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    TreeNode    b1(5), b2(3), b3(6), b4(2), b5(4), b6(1);
    b1.left = &b2;
    b1.right = &b3;
    b2.left = &b4;
    b2.right = &b5;
    b4.left = &b6;
    runTest(&b1, 3);

    return 0;
}
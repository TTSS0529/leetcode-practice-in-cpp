#include "path_sum_ii.hpp"

static void runTest(TreeNode* root, int targetSum) {
    Solution    sol;
    auto    res = sol.pathSum(root, targetSum);
    printMatrix(res);
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    TreeNode    a1(7), a2(2), a3(5), a4(1), a5(11, &a1, &a2);
    TreeNode    a6(13), a7(4, &a3, &a4), a8(4, &a5, nullptr);
    TreeNode    a9(8, &a6, &a7), a10(5, &a8, &a9);
    runTest(&a10, 22);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    TreeNode    b1(2), b2(3), b3(1, &b1, &b2);
    runTest(&b3, 5);

    std::cout << ">>>>>>>>>> example 3 <<<<<<<<<<" << std::endl;
    TreeNode    c1(2), c2(1, &c1, nullptr);
    runTest(&c2, 0);

    return 0;
}
#include "path_sum_iii.hpp"

static void runTest(TreeNode* root, int targetSum) {
    Solution    sol;
    cout << sol.pathSum(root, targetSum) << endl;
}

int main() {
    std::cout << ">>>>>>>>>> example 1 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test1{10,5,-3,3,2,nullopt,11,3,-2,nullopt,1};
    TreeNode    *root = creatBinaryTree(test1);
    runTest(root, 8);
    freeBinaryTree(root);

    std::cout << ">>>>>>>>>> example 2 <<<<<<<<<<" << std::endl;
    vector<optional<int>>   test2{5,4,8,11,nullopt,13,4,7,2,nullopt,nullopt,5,1};
    root = creatBinaryTree(test2);
    runTest(root, 22);
    freeBinaryTree(root);

    return 0;
}